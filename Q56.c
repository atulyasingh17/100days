//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n;
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
            printf("%d ",a[i]);
        }
}
