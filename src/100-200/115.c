#include <stdio.h>

struct val 
{

    char *name;
    int age;
    char *job;

} *ip;

int main()
{

    struct val *ip;

    (*ip).age = 25;
    ip->age = 3;
    ++(*ip).age;
    ++ip->age;

    printf("*ip = %d\n", ip->age);

}
