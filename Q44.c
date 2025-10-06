#include <stdio.h>
int main()
{
    int n,d,N,count=0;
    float sum=1;
    printf("Enter N : ");
     scanf("%d",&N);
    
    for(n=3,d=4;;n=n+2,d=d+2)
    {
        sum=sum+(float)n/d;
        count++;
        if(count==N-1)
        break;
    }
    printf("Sum of series = %.1f",sum);
}
