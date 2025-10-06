//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
    {
        int N,i,j;
        printf("Enter size of an array = ");
         scanf("%d",&N);
        
        int a[N];
        for(i=0;i<N;i++)
            {
                printf("Enter value at a[%d] = ",i);
                 scanf("%d",&a[i]);
            }
            
        for(i=0,j=N-1;i<j;i++,j--)
            {
                int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            }
        
        printf("Reversed Array\n");
        for(i=0;i<N;i++)
        printf("value at a[%d] = %d\n",i,a[i]);
    }
