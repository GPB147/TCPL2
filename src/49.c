#include <stdio.h>

int main()
{

    int a = 3;
    int b = 3;
    int c = 3;
    int d = 3;
    int e = 3;  
    int f = 3;

    a = a & 4;
    b = b | 4;
    c = c ^ 4;
    d = d << 4;
    e = e >> 4;
    f = ~f ;

    printf("& = %d\n| = %d\n^ = %d\n<< = %d\n>> = %d\n& ~ = %d\n", a, b, c, d, e, f);

}
