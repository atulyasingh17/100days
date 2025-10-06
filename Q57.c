//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Size of array : ");
     scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;i++)
        {
            printf("Enter value at a[%d] = ",i);
             scanf("%d",&a[i]);
        }
    
    for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
    printf("Sum of all elements of an array = %d",sum);
}
