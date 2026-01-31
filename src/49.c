#include <stdio.h>

int main()
{

    int a = 3;
    int b = 3;
    int c = 3;
    int d = 3;
    int e = 3;  
    int f = 3;

    a = a & 17;
    b = b | 17;
    c = c ^ 17;
    d = d << 17;
    e = e >> 17;
    f = f & ~17;

    printf("& = %d\n| = %d\n^ = %d\n<< = %d\n>> = %d\n& ~ = %d\n", a, b, c, d, e, f);

}
