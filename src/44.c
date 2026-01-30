#include <stdio.h>

int Master(int c);

int main()
{

    int r = Master('a');

    printf("%d\n", r);

}

int Master(int c)
{

    if (c >= 'A' && c <= 'Z')
    {

        return c + 'a' - 'A';

    }

    else
    {

        return c;

    }

}
