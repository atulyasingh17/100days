//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/


#include<stdio.h>
#include<math.h>
int main()
	{
		float marks;
		char grade;
		
		printf("Enter Marks : ");
		 scanf("%f",&marks);
	
    grade=(marks >= 91 && marks <=100 ? 'A'  : marks >=81 && marks <= 90 ? 'B'  : marks >= 71 && marks <=80 ? 'C'  : marks >= 61 && marks <= 70 ? 'D' : marks >= 51 && marks <= 60 ? 'E' : marks >= 0 && marks <= 50 ? 'F' : printf("Wrong Input\n"));
		
		if(grade >= 'A' && grade <= 'F')
		printf("Grade %c\n",grade);
	}
