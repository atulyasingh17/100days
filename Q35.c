//Q.35 Write a program to print all factors of a given number.
#include<stdio.h>
int main()
    {
        int num;
        printf("Enter Number : ");
        scanf("%d",&num);
        for (int i =1; i <= num; i++)
        {
            if( num % i == 0)
            printf("%d\n",i);
        }
    }
