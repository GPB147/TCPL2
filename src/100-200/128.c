#include <stdio.h>

union un
{

    int in;
    char *cha;

};

int main()
{

    union un v0;

    v0.in = 25;

    printf("number = %d\n", v0.in);

    v0.cha = "Hello";

    printf("wrod = %s\n", v0.cha);

}
