#include <stdio.h>
int main()
{
    int n,d,N,count=0;
    float sum=0;
    printf("Enter N : ");
     scanf("%d",&N);
    
    for(n=2,d=3;;n=n+2,d=d+4)
    {
        sum=sum+(float)n/d;
        count++;
        if(count==N)
        break;
    }
    printf("Sum of series = %.2f",sum);
}
