#include <stdio.h>
#include <ctype.h>

#define Number 100

char itoa(char s[]);

int main()
{

    char s2[Number];
    char v = itoa(s2);


}

char itoa(char s[])
{

    int i, c;
    char r;

    for (i = 0; i <= Number - 1 && (c = getchar()) != EOF; ++i)
    {

        s[i] = (char)c;
        r = (char)(printf("s[%d] = %c\n", i, s[i]));

    }

    return r;

}
