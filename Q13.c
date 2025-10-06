Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include<math.h>
#include<stdio.h>
int main()
    {
        int y;
        printf(" > Enter the year = ");
         scanf("%d",&y);
        
        if((y%4 && y%100)||(y%400))
          printf("\n\t#####\tIt's not a leap year\t#####");
                else
                    printf("\n\t####\tIt's a leap year\t####");
    }
