#include <stdio.h>

#define NUMBER 20

struct val0
{

    int cou;

};

int main()
{

    int i;

    struct val0 v0 =
    {

        v0.cou = 0

    };


    struct val0 *ip = &v0;

    for (i = 0; i <= NUMBER; i++)
    {

        printf("cou = %d\n", ip->cou);

        ++ip->cou;

    }

}
