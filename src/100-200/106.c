#include <stdio.h>

struct val0
{

    char *name;
    int age;

};

struct val0 f(char *name, int age) 
{

    struct val0 v0;

    v0.name = name;
    v0.age = age;
        
    return v0;

}

int main()
{

    struct val0 v1 = f("gpb147", 25);

    printf("v1 = (%s, %d)\n", v1.name, v1.age);

    return 0;

}
