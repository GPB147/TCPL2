#include <stdio.h>

int main()
{

    float len, wid, area;

    struct val
    { 

        float len;
        float wid;

    };

    struct val rect;

    len = rect.len = 2;
    wid = rect.wid = 6.25;
    area = len + wid;

    printf("Area of rectangle = %2.2f\n", area);

}
