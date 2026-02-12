#include <stdio.h>

int main()
{

    FILE *fi = fopen("C:/Users/Persatech/Desktop/Empty.txt", "r");

    if (fi == NULL)
    {

        printf("Nothing here\n");

    }

    printf("File open successfully\n");

    fclose(fi);

    return 0;

}
