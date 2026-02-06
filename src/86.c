#include <stdio.h>

int MASTER(int *px, int *py);

int main()
{

    int v1 = 2;
    int v2 = 22;
    int v3 = MASTER(&v1, &v2);

    printf("v3 = %d\n", v3);

}

int MASTER(int *px, int *py)
{

    int temp;

    temp = *px;
    *px = *py;
    *py = temp;

    return temp;

}
