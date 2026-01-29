#include <stdio.h>

#define number 551

int first();
char subtitle;
float interest;

int main()
{

    double d;
    short int a;
    long int b;
    long double e;
    signed char f;
    signed int g;
    unsigned char h;
    unsigned int j;

    for (d = 3.75; d < number; ++d)
    {

        if (d > 100)
        {

            a = 100;
            b = 200;
            e = 100.00;
            f = '\100';
            g = -100;
            h = '\100';
            j = 100;

        }

        printf("short int = %d\nlong int = %ld\nlong double = %Lf\nsigned char = %c\n signed int = %d\nunsigned char = %c\n unsigned int = %d\n", a, b, e, f, g, h, j);

    }

}

int first(void)
{

    extern char subtitle;
    extern float interest;
    int c;

    interest = 0.0;

    while (interest < number && (c = getchar()))
    {

        ++interest;
        if (interest == 100)
        {

            subtitle = 4;

        }

        else if ( interest == 200)
        {

            subtitle = 2;

        }

        else
        {

            subtitle = 1;

        }

    }

    return subtitle;

}
