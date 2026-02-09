#include <stdio.h>

int main() 
{
    float fahr, celsius;
    float lower, step, upper;

    for (lower = 0.0, step = 20.0, upper = 300.0, fahr = lower; fahr <= upper; fahr += step, celsius = (fahr-32)*(5.0/9.0)) {
        printf("%3.2f\t%6.2f\n", fahr, celsius);
    }
}
