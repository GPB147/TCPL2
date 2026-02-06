/* Making random numbers */

# include <stdio.h>

#define Number 4

int Master(int s[], int i1, int i2);

int main()
{

    int i1, i2, s[Number], v;

    for (i1 = 0; i1 <= Number - 1; ++i1)
    {

        for (i2 = 0; i2 <= Number - 1; ++i2)
        {

            v = Master(s, i1, i2);

            printf("v = %d\n", v);

        }

    }

}

int Master(int s[], int i1, int i2)
{

    int temp = s[i1];
    s[i1] = s[i2];
    s[i2] = temp;

}
