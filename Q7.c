//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include<stdio.h>
#include<math.h>
int main()
	{
		int a,b;
		printf("Enter 1st and 2nd number = ");
		 scanf(" %d%d",&a,&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("1st No. = %d\n",a);
		printf("2nd No. = %d\n",b);
	}
