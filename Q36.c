//Q.36Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() 
    {
        int n1,n2;
        printf("Enter first number: ");
        scanf("%d",&n1);

        printf("Enter second number: ");
        scanf("%d",&n2);
        while (n2 != 0)
        {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }
        printf("Greatest Common Divisor (GCD) is %d\n",n1);
    }
