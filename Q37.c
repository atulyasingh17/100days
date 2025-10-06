#include<stdio.h>
int main()
    {
        int a,b,max,c;
        printf("Enter 1st and 2nd number = ");
         scanf("%d%d",&a,&b);
        max=(a>b?a:b);
        while(1)
        {
            if(max%a==0 && max%b==0)
            {
                printf("LCM = %d\n",max);
                break;
            }
            else
            max++;
        }
    }
