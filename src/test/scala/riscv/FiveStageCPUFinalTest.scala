package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FiveStageCPUFinalTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Five-stage Pipelined CPU with Reduced Branch Delay")
  it should "calculate recursively fibonacci(10)" in {
    test(new TestTopModule("fibonacci.asmbin", ImplementationType.FiveStageFinal))
      .withAnnotations(TestAnnotations.annos) { c =>
        for (i <- 1 to 50) {
          c.clock.step(1000)
          c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
        }

        c.io.mem_debug_read_address.poke(4.U)
        c.clock.step()
        c.io.mem_debug_read_data.expect(55.U)
      }
  }
  it should "quicksort 10 numbers" in {
    test(new TestTopModule("quicksort.asmbin", ImplementationType.FiveStageFinal))
      .withAnnotations(TestAnnotations.annos) { c =>
        for (i <- 1 to 50) {
          c.clock.step(1000)
          c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
        }
        for (i <- 1 to 10) {
          c.io.mem_debug_read_address.poke((4 * i).U)
          c.clock.step()
          c.io.mem_debug_read_data.expect((i - 1).U)
        }
      }
  }
  it should "store and load single byte" in {
    test(new TestTopModule("sb.asmbin", ImplementationType.FiveStageFinal)).withAnnotations(TestAnnotations.annos) {
      c =>
        c.clock.step(1000)
        c.io.regs_debug_read_address.poke(5.U)
        c.io.regs_debug_read_data.expect(0xdeadbeefL.U)
        c.io.regs_debug_read_address.poke(6.U)
        c.io.regs_debug_read_data.expect(0xef.U)
        c.io.regs_debug_read_address.poke(1.U)
        c.io.regs_debug_read_data.expect(0x15ef.U)
    }
  }
  it should "solve data and control hazards" in {
    test(new TestTopModule("hazard.asmbin", ImplementationType.FiveStageFinal)).withAnnotations(TestAnnotations.annos) {
      c =>
        c.clock.step(1000)
        c.io.regs_debug_read_address.poke(1.U)
        c.io.regs_debug_read_data.expect(26.U)
        c.io.mem_debug_read_address.poke(4.U)
        c.clock.step()
        c.io.mem_debug_read_data.expect(1.U)
        c.io.mem_debug_read_address.poke(8.U)
        c.clock.step()
        c.io.mem_debug_read_data.expect(3.U)
    }
  }
  // +++
  it should "test clz" in {
    test(new TestTopModule("clz.asmbin", ImplementationType.FiveStageFinal))
      .withAnnotations(TestAnnotations.annos) { c =>
        for (i <- 1 to 50) {
          c.clock.step(1000)
          c.io.mem_debug_read_address.poke((i * 4).U) // Avoid timeout
        }

        c.io.mem_debug_read_address.poke(4.U)
        c.clock.step()
        c.io.mem_debug_read_data.expect(28.U)
      }
  }
  it should "test bseti" in {
    test(new TestTopModule("bseti.asmbin", ImplementationType.FiveStageFinal)).withAnnotations(TestAnnotations.annos) {
      c =>
        c.clock.step(1000)
        c.io.regs_debug_read_address.poke(5.U)
        c.io.regs_debug_read_data.expect(3.U)
        c.io.regs_debug_read_address.poke(6.U)
        c.io.regs_debug_read_data.expect(256.U)
        c.io.regs_debug_read_address.poke(7.U)
        c.io.regs_debug_read_data.expect(7.U)
    }
  }
  it should "test orcb" in {
    test(new TestTopModule("orcb.asmbin", ImplementationType.FiveStageFinal)).withAnnotations(TestAnnotations.annos) {
      c =>
        c.clock.step(1000)
        c.io.regs_debug_read_address.poke(5.U)
        c.io.regs_debug_read_data.expect(0.U)
        c.io.regs_debug_read_address.poke(6.U)
        c.io.regs_debug_read_data.expect(65280.U)
        c.io.regs_debug_read_address.poke(7.U)
        c.io.regs_debug_read_data.expect(65535.U)
        c.io.regs_debug_read_address.poke(28.U)
        c.io.regs_debug_read_data.expect(16711680.U)
        c.io.regs_debug_read_address.poke(29.U)
        c.io.regs_debug_read_data.expect("b11111111000000000000000000000000".U)
    }
  }
  it should "test rev8" in {
    test(new TestTopModule("rev8.asmbin", ImplementationType.FiveStageFinal)).withAnnotations(TestAnnotations.annos) {
      c =>
        c.clock.step(1000)
        c.io.regs_debug_read_address.poke(5.U)
        c.io.regs_debug_read_data.expect(0x34120000.U)
        c.io.regs_debug_read_address.poke(6.U)
        c.io.regs_debug_read_data.expect(0x01011010.U)
        c.io.regs_debug_read_address.poke(7.U)
        c.io.regs_debug_read_data.expect(0x11110000.U)
    }
  }
  
}
