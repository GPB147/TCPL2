#include <stdio.h>

int main()
{

    char cha0[20];

    char cha1[] = 
    {

        "Hello"

    };

    FILE *fi = fopen("C:/Users/Persatech/Desktop/Empty.txt", "wb");

    if (fi == NULL)
    {

        printf("Nothing there\n");

        return 1;

    }

    printf("File open successfully\n");

    size_t n = fread(cha0, 1, 20, fi);

    printf("Total byte stored = %zu\n", n);

    fwrite(cha1, 1, 4, fi);

    printf("Writing is completed\n");

    fclose(fi);

    return 0;

}
