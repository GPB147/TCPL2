#include <stdio.h>
#include <string.h>

#define Number 120

int main()
{

    int i, c;
    char s[Number];
    long long unsigned int v;

    for (i = 0; i <= Number - 1 && (c = getchar()) != EOF; ++i)
    {

        s[i] = (char)c;
        v = strlen(s);

        printf("s[%d] = %d\tv = %llu\n", i, s[i], v);

    }

}
