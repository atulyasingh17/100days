//q.26 Write a program to print numbers from 1 to n.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	printf("%d\n",i);
}
