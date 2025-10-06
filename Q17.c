//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main()
	{
		float a,b,c,root1,root2,real,img,disc;
		printf("Enter coefficients (a,b,c) = "); // a x^2 + b x + c = 0
		 scanf("%f%f%f",&a,&b,&c);
		
		disc = (b*b) - 4*a*c;
		
		if(disc > 0)
		{
			root1 = (- b + sqrt(disc))/2*a;
			root2 = (- b - sqrt(disc))/2*a;
			printf("Roots are real and different : %f %f\n",root1,root2);
		}
		else if(disc == 0)
		{
 			root1 = (- b + sqrt(disc))/2*a;
			root2 = (- b - sqrt(disc))/2*a;
			printf("Roots are real and same : %f\n",root1);
		}
		else if(disc < 0)
		printf("Roots are complex\n");
		else
		printf("Invalid input");
	}
