#include <stdio.h>

struct val 
{

    int *age;

};


int main()
{

    int n = 25;

    struct val *ip;

    ip->age = &n;

    printf("age = %d\n", *ip->age);

}
