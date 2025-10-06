//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>
int main()
	{
		float a,p,r,t,n,ci,si;
		printf("Enter principle, rate, and time = ");
		 scanf("%f%f%f",&p,&r,&t);
		printf("Enter no. of times in a year = ");
		 scanf("%f",&n);

			si=(p*r*t)/100;

			a=p*pow((1+(r/100)/n),n*t);

			ci=a-p;
		
		printf("Simple Interest = %f Rs.\n",si);
		printf("Compund Interest = %f Rs.\n",ci);
	} 		
