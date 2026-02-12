#include <stdio.h>

int main()
{

    char cha[20];

    FILE *fi = fopen("C:/Users/Persatech/Desktop/Empty.txt", "rb");

    if (fi == NULL)
    {

        printf("Nothing here\n");

        return 1;

    }

    printf("File open successfully\n");

    size_t n = fread(cha, 1, 20, fi);

    printf("Read %zu bytes\n", n);

    fclose(fi);

    return 0;

}
