/* """, ''', Symboles, defining, define library */
#include <stdio.h>

#define LOWER 0
#define STEP 20
#define UPPER 300

int main() 
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) 
        printf("%3.2d\t%6.1f\n", fahr, (fahr-32)*(5.0/9.0));
}
