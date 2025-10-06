//q.30 Write a program to reverse a given number.

#include <stdio.h>
int main()
    {
        int N,d,count=0,rev=0;
        printf("Enter N = ");
         scanf("%d",&N);
        while(N!=0)
            {
                d=N%10;
                rev=rev*10+d;
                N=N/10;
                count++;
            }
        printf("REVERSED NO. = %d",rev);
        printf("\nNo. of digits = %d\n",count);
    }
