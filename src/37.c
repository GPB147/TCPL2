#include<string.h>

int strlen(char s[])
{

    int i;

    while (s[i] != '\0')
    {

        ++i;

    }

    return i;

}
