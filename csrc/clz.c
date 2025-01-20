int clz(int x) 
{
    return __builtin_clz(x);
}

int main()
{
    *(int *) (4) = clz(10);
}