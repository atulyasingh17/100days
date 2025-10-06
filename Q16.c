//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main()
	{
		int max,a,b,c;
		printf("Enter 1st, 2nd, and 3rd number = ");
		 scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			if(a>c)
			max=a;
			else
			max=c;
		}
		else if(b>c)
		max=b;
		else
		max=c;

		printf("%d is max\n",max);
	}
