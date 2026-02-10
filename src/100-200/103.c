#include <stdio.h>

int main()
{

    int age;
    char *name, *work;

    struct val
    {

        char *name;
        int age;
        char *work;

    };


    struct val me;

    name = me.name = "gpb147";
    age = me.age = 25;
    work = me.work = "trust";

    printf("name = %s\nage = %d\nwork = %s\n", name, age, work);

}
