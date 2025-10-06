//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
    
    int pos=0,neg=0,zero=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        pos++;
        else if(a[i]<0)
        neg++;
        else
        zero++;
    }
        
    printf("Positive = %d, ",pos);
    printf("Negative = %d, ",neg);
    printf("Zero = %d\n",zero);
}
