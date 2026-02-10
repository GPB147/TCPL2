#include <stdio.h>

#define NUMBER 20

struct val0
{

    char *ch;
    int in;

} s[] = 
{

    "Hello", 0,
    "World!", 1

};

int main()
{

    char *ch0 = (s[0].ch);
    char *ch1 = (s[1].ch);
    int in0 = s[0].in;
    int in1 = s[1].in;
    
    

    printf("ch0 = %s\nch1 = %s\nin0 = %d\nin1 = %d\n", ch0, ch1, in0, in1);

}
