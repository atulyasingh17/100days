//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include<math.h>
#include<stdio.h>
int main()
	{
		int i,N,sum=0;
		printf("Enter Nth natural number = ");
		 scanf("%d",&N);
		for(i=1;i<=N;i++)
		{
			sum=sum+i;
		}
		printf("Sum of first %d natural numbers = %d\n",N,sum);
	} 
