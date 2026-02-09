/* "" actually different to '' in C */
#include <stdio.h>

int main() 
{

    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
    {

        if (c == '\n')
        {

            ++nl;

        }
        
        printf("%2d\n", nl);

    }
}
