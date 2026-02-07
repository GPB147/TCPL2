#include <stdio.h>

int main()
{

    int *ip, *qi, v;
    v = 432;
    qi = ip;
    ip = &v;

    printf("ip = %p\n*ip = %d\nqi = %p\n*qi = %d\n", (void *)ip, *ip, (void *)qi, *qi);

}
