#include <stdio.h>
int main()
{
    int n,i,d,N,f=0;
    printf("Enter N : ");
     scanf("%d",&N);
    n=N;
    while(n!=0)
    {
        int fact=1;
        d=n%10;
        for(i=1;i<=d;i++)
        fact=fact*i;
        f=fact+f;
        n=n/10;
    }
    if(f==N)
    printf("Strong Number");
    else
    printf("Not A Strong Number");
}
