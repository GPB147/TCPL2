#include <stdio.h>

#define Number 44
#define Second_Number 22

int main()
{

    
    int i = 0;

    while (i < Number)
    {

        printf("%d\n", i);
        i++;

        if (i >= Second_Number)
        {

            printf("\t%d\n\n", i);
            ++i;

        }

    }

}
