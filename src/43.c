#include <stdio.h>

int Number = 31;

int main()
{

    int c, i;
    char s[Number];

    for (i = 0; i < Number - 1 && (c = getchar()) != EOF; ++i)
    {

        s[i] = (char)c;

        while (s[i] >= '0' && s[i] <= '9')
        {

            printf("%c\n", s[i]);
            ++s[i];
            
        }

    }

}
