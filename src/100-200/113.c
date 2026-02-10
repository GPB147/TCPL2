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

    printf("name = %s\nage = %d\njob = %s\n", v0.name, v0.age, v0.job);

}
