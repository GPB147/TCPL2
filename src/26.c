/* ||, if else */

#include <stdio.h>

#define in 1
#define out 0

int main()
{

    int c, nl, nw, nc, state;

    state = out;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {

        ++nc;

        if (c == '\n')
        {

            ++nl;

        }

        if (c == ' ' || c == '\n' || c == '\t')
        {

            state = out;

        }

        else if (state == out)
        {

            state = in;
            ++nw;

        }

        printf("%3d\t%3d\t%3d\n", nl, nc, nw);

    }

}