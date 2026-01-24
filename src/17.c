/* A want to fuck my self again...*/

#include <stdio.h>

int main() 
{

    float fahr, celcius;
    float lower, step, upper;

    lower = 0;
    step = 20;
    upper = 300;
    fahr = lower;

    while (fahr <= upper) 
    {

        celcius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.2f\t%6.2f\n", fahr, celcius);
        fahr += step;

    }

}
