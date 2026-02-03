#include <stdio.h>

int main()
{

    int i = 0, v = 10;

    do 
    {

        i += 100;
        v += 1000;
        
        printf("i = %d\tv = %d\n", i, v);

    }

    while (i <= 1000 && v <= 10000);

}
