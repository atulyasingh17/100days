//Write a program to check if a number is prime.
#include <stdio.h>
int main()
    {
        int num,count=0;
        printf("Enter Number: ");
        scanf("%d",&num);
        
        if (num <= 1)
        printf("%d is not a prime number.\n",num);
        
        for (int i = 2; i <= num / 2; i++)
        {
        if (num % i == 0)
        count++;
        }
        if(count!=0)
        printf("%d is not a prime number.\n",num);
        else
        printf("%d is a prime number.\n",num);
    }
