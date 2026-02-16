#include <stdio.h>
#include <stdlib.h>

int main()
{

    size_t i = 24;

    printf("malloc(%d) = %zu\n", i, malloc(i));

}
