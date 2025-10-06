//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include<math.h>
#include<stdio.h>
int main()
	{
		int N;
		printf("Enter Number = ");
		 scanf("%d",&N);
		
		if(N%2==0)
		printf("%d is Even\n",N);
		else
		printf("%d is Odd\n",N);
	}
