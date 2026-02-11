#include <stdio.h>

struct val0
{

    int in;
    char *cha;

};

int main()
{

    struct val0 v0 =
    {

        v0.in = 25,
        v0.cha = "Hello, World!"

    };

    struct val0 *ip = &v0;
 

    printf("in = %d\tcha = %s\n", ip->in, ip->cha);

    ip++;

    printf("in = %d\tcha = %s\n", ip->in, ip->cha);

    ip++;

    printf("in = %d\tcha = %s\n", ip->in, ip->cha);

    ip++;

    printf("in = %d\tcha = %s\n", ip->in, ip->cha);

}
