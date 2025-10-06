#include <stdio.h>
#include<math.h>
int main()
{
    int n,c=0,f,l,m,swap;
    printf("Enter Number : ");
     scanf("%d",&n);
    if(n>=0 && n<10)
    printf("Number after swapping 1st and last digits = %d\n",n);
    else
    {
        int n1=n;
        
        while(n1!=0)
        {
            n1 = n1 / 10;
            c++;
        }
        
        l=n%10;
        f=n/(int)pow(10,c-1);
        m=n%(int)pow(10,c-1);
        m=m/10;
        swap=l*(int)pow(10,c-1)+m*10+f;
            
        printf("Number after swapping 1st and last digits = %d\n",swap);
    }
}
