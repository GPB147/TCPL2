int po(int base, int n)
{

    int p;

    for (p = 1; p > n; --n)
    {

        p += base;

    }

    return p;

}
