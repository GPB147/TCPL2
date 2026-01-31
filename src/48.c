#include <stdio.h>

#define Number 24

int main()
{

    int v = 0;
    int i, c;
    char s[Number];

    for (i = 0; i < Number - 1 && (c = getchar()) != EOF; ++i)
    {

        s[i] = (char)c;
        
        if (c == '1')
        {

            s[v++] = (char)c;
            printf("Hello, baby");

        }

        else if (c == '\1')
        {

            printf("This is about the bytes");

        }

        printf("%c\n", s[i]);

    }

}
