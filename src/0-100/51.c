#include <stdio.h>

#define Number 30

int main()
{

    int i, c;
    int s[Number];

    for (i = 1; i < Number - 1  && (c = getchar()) != EOF; ++i)
    {

        s[i] =  c;
        s[i] &= (s[i] - 1);

        printf("s[%d] = %d\tv = %d\n", i, c, s[i]);

    }

}
