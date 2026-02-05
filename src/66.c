#include <stdio.h>

#define Number 100

int Master(int i);
int Multi(int i);

int main()
{

   int i, c, v1, v2;

   for (i = 0; i <= Number - 1 && (c = getchar()) != EOF; ++i)
   {

      v1 = Master(i++ - 1);
      v2 = Multi(200 + i);

      printf("Master = %d\tMulti = %d\n", v1, v2);

   }

}

int Master(int i)
{

   while (i <= Number - 1)
   {

      i++;

   }

   return i;

}

int Multi(int i)
{

   while (i >= Number - 1)
   {

      i--;

   }

   return i;

}
