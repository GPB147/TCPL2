#include <stdio.h>

struct val0
{

    int in;
    char *cha;

};

int main()
{

    struct val0 *ip;

    printf("in = %d\tcha = %d\n", ip->in, ip->cha);

    ip++;

    printf("in = %d\tcha = %d\n", ip->in, ip->cha);

    ip++;

    printf("in = %d\tcha = %d\n", ip->in, ip->cha);

    ip++;

    printf("in = %d\tcha = %d\n", ip->in, ip->cha);

}
