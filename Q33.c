//Write a program to check if a number is an Armstrong number.
#include<math.h>
#include<stdio.h>
int main()
    {
        int N,N1,r,sum=0,count=0;
        printf("Enter N = ");
         scanf("%d",&N);
        N1=N;
        while(N1!=0)
            {
                count=count+1;
                N1=N1/10;
            }
        N1=N;
        while(N1!=0)
            {
                r=N1%10;
                sum=sum+pow(r,count);
                N1=N1/10;
            }
        if(N==sum)
        printf("\n\tArmstrong\n");
        else
        printf("\n\tNot Armstrong\n");
    }
