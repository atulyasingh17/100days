#include <stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter Number : ");
     scanf("%d",&n);
    int n1=n;
    while(n!=0)
    {
        int d=n%10;
        if(d%2!=0)
        pro=pro*d;
        n=n/10;
    }
    printf("Product of odd digits of %d is %d",n1,pro);
}
