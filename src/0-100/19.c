/* Hello Fuckness*/

#include <stdio.h>

#define lower 0 
#define step 20
#define upper 300

int main() 
{

    int fahr;

    for (fahr = lower; fahr <= upper; fahr += step)
    {

        printf("%3d\t%3.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    }

}
