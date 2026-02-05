#include <stdio.h>

#define Number 40

int main()
{

    int n = 10;

    while (n < Number)
    {

        n++;
        n = -n;
        n--;
        n = -n;

        printf("n = %d\n", n);

    }

}
