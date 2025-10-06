#include <stdio.h>
int main()
{
   int r,i,c;
   
   for(r=1;r<=5;r++)
   {
       for(c=2;c<=r;c++)
       printf(" ");
       
       for(c=5;c>=r;c--)
       printf("*");
       
       printf("\n");
   }
}
