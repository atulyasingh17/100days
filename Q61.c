//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
    {
        int N,i,wanted,count=0,garbage;
        printf("Enter size of an array = ");
         scanf("%d",&N);
        
        int a[N];
        for(i=0;i<N;i++)
            {
                printf("Enter value at a[%d] = ",i);
                 scanf("%d",&a[i]);
            }
        printf("Enter value wanna search = ");
         scanf("%d",&wanted);
        
        for(i=0;i<N;i++)
            {
                if(wanted==a[i])
                {
                    printf("Found at index %d\n",i);
                    count++;
                }
            }
        if(count==0)
        printf("Not Found\n");
    }
