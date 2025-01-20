int clz(int x) {

    return (x)? clz(x>>1)-1 : 32;
}

int main()
{
    *(int *) (4) = clz(10);
}