#include <stdio.h>

int main()
{

    char *cha = "a";

    cha++;
    *cha++;

    printf("cha = %d\n", *cha);

}
