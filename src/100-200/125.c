#include <stdio.h>

typedef struct STRUCTURE REAL_STRUCTURE;

    struct REAL_STRUCTURE 
    {

        int in;
        char *cha;

    };

int main()
{

    struct REAL_STRUCTURE var0 =
    {

        24,
        "Hello"

    };

    printf("number = %d\nword = %s\n", var0.in, var0.cha);

}
