#include <stdio.h>

#define Number 400

int main()
{

    int i, c, s[Number];

    for (i = 0; i < Number - 1 && (c = getchar()) != EOF; ++i)
    {

        s[i] = c;

        (s[i] > 20) ? printf("%d is bigger than 20\n", s[i]) : printf("%d is smaller than 20\n", s[i]);

    }

}
