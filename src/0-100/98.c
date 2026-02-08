#include <stdio.h>

char *main()
{

    int i = 2;

    static char *ip[] = 
    {

        "Hello", "World",
        "!",

    };
    

    (i > 35 || i <0) ? printf("%s\n",ip[0]) : printf("%s\n",ip[2]);

}
