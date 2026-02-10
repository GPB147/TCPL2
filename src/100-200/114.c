#include <stdio.h>

struct val 
{

    char *name;
    int age;
    char *job;

};

struct val v0 = 
{

    "gpb147",
    25,
    "trust"

};

int main()
{

    struct val *ip = &v0;

    printf("*ip = %d\n*ip = %d\n", (*ip).age, ip->age);

}
