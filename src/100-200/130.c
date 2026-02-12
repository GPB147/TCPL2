#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool bo0 = true;
    bool bo1 = false;

    if (bo0)
    {

        bo0 = 1;

    }

    else if (bo1)
    {

        bo1 = 1;

    }

    printf("bo0 = %d\nbo1 = %d\n", bo0, bo1);

}
