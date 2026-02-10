#include <stdio.h>

int main()
{

    int age;
    char *name, *work, *col;

    struct val0
    {

        char *name;
        int age;
        char *work;

    };

    struct val1
    {

        struct val0 me0;
        char *color;

    };

    struct val1 me1;

    name = me1.me0.name = "gpb147";
    age = me1.me0.age = 25;
    work = me1.me0.work = "trust";
    col = me1.color = "green";

    printf("name = %s\nage = %d\nwork = %s\ncolor = %s\n", name, age, work, col);

}
