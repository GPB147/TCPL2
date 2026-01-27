/* (++x) = (x += 1), long */

#include <stdio.h>

int main() 
{

    long nc;

    nc = 0;

    while (getchar()  != EOF)
    {

        ++nc;
        printf("%5ld\n", nc);

    }

}
