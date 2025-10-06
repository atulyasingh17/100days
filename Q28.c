//q.28 Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
	int num,pro=1;
	printf("Enter N : ");
	scanf("%d",&num);
	if (num <= 0)
	printf("Wrong Input\n");
	for(int i=1;i<=num;i++)
	{
		if(i%2 == 0)
		pro=pro*i;
	}
	printf("Product of all even number is %d\n",pro);
}
