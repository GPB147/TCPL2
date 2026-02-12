#include <stdio.h>

#define NUMBER 20

int main()
{

    char cha[NUMBER];

    snprintf(cha, sizeof(cha), "Hello");

    printf("cha = %s\n", cha);

}
