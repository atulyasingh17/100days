//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

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
    
    int eve=0,odd=0;
    for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            eve++;
            else
            odd++;
        }
        
    printf("Even = %d, ",eve);
    printf("Odd = %d",odd);
}
