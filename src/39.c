#include <stdio.h>

int main()
{

    int i = 0;
    int c;

    while ((c = getchar()) != EOF)
    {

        ++i;
        printf("Words: %d\n", i);

    }

}
