//Q.22 Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
	float p,l,ps,ls,c,s;
	printf("Enter the cost price : ");
	scanf("%f",&c);
	printf("Enter the selling price : ");
	scanf("%f",&s);
	if(c < s)
		{
		printf("Profit\n");
		p = s - c;
		ps = (p/c)*100;
		printf("%.2f %%\n",ps);
		}
	else if(c == s)
	printf("No Profit No Loss\n");
	else
		{
		printf("Loss\n");
		l= c - s;
		ls = (l/c)*100; 
		printf("%.2f %%\n",ls);
		}
}
