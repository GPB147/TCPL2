#include <stdio.h>
#include <stdlib.h>

#define NUMBER 20

int main()
{

    int i, s[NUMBER];

    for (i = 0; i <= NUMBER - 1; i++)
    {

        s[i] = i;

        printf("s[%d] = %d\n", i, s[i]);

        if (s[i] == '\5')
        {

            printf("Hello, World!\n");

            exit(1);

        }

        else if (s[i] == '\10')
        {

            printf("Hello, World!\n");

            exit(0);

        }

    }

}
