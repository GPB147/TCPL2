#include <stdio.h>

#define Number 154

int main()
{

    char s[Number];
    int i;
    long int c;

    for (i = 0; i < Number - 1 && (c = getchar()) != EOF; ++i)
    {

        s[i] = (char)c;

        if (s[i] <= '0' && s[i] >= '9')
        {

            s[i] = (char)c;

        }

        printf("%d\n", s[i]);

    }

}
