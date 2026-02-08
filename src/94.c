#include <stdio.h>

int MASTER(char *ip0, char *ip1);

int main()
{

    int i , v;
    char c;

    for (i = 0; i < 20 && (c = getchar()) != EOF; ++i)
    {

        v = MASTER(&c, &c);

        printf("v = %d\n", v);

    }

}

int MASTER(char *ip0, char *ip1)
{

    int i = 0;

    while ((*ip0++ = *ip1++) != '\0')
    {

        ++i;

    }

    return i;

}
