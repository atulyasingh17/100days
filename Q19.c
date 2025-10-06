//Q.19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
	{
		float a,b,c;
		printf("Enter the sides of triangle = ");
		scanf("%f%f%f",&a,&b,&c);
		if( a==b && b == c && c==a)
		printf("Triangle is equilateral\n");
		else if( a == b && b != c || a == c && a !=b || b  == c && a != c)
		printf("Triangle is isosceles\n");
		else
		printf("Triangle is scalene\n");

	} 
