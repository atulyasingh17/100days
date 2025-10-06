//Write a program to find the sum of digits of a number.

#include <stdio.h>
int main()
    {
        int N,d,sum=0;
        printf("Enter N : ");
         scanf("%d",&N);
        int N1=N;
        while(N1!=0)
            {
                d=N1%10;
                sum=sum+d;
                N1=N1/10;
            }
        printf("Sum Of All Digits of %d = %d\n",N,sum);    
    }
