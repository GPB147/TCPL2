#include <stdio.h>

int main()
{

    int i;
    char c, *ip;

    for (i = 0; i <= 20 && (c = getchar()); i++)
    {

        ip = &c;

        *ip += 20;

        printf("ip = %d\n", *ip);

    }

}
