#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

int main() 
{

    errno = 0;
    
    long val = strtol("999999999999999999999", NULL, 10);

    if (errno != 0) 
    {

        printf("Overflow detected\n");

    }

    return 0;

}
