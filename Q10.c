//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<math.h>
#include<stdio.h>
int main()
    {
        int T,hr,min,sec;
        printf("Enter the seconds = ");
         scanf("%d",&sec);
	
	min=sec/60;
        hr=min/60;;
        sec=sec%60;
	min=min%60;

        printf("Total Time = %d hour /  %d minutes / %d seconds",hr,min,sec);
    }
