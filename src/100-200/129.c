#include <stdio.h>

struct 
{

    unsigned int in0 : 1;
    unsigned int in1 : 2;

} str;

int main()
{

    str.in0 = 1;
    str.in1 = 3;

    printf("in0 = %d\nin1 = %d\n", str.in0, str.in1);

}
