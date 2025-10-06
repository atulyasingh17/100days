//q.29 Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
	int n,k=1;
	printf("Enter N : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	k=i*k;
	printf("Factorial of %d =  %d\n",n,k);
}
