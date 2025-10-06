//q.32 Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
    {
        int N,d,N1,rev=0;
        printf("Enter N = ");
         scanf("%d",&N);
        N1=N;
        while(N1!=0)
            {
                d=N1%10;
                rev=rev*10+d;
                N1=N1/10;
            }   
        if(rev==N)
        printf("Yes! %d is Palindrome\n",N);
        else
        printf("No! %d is not a Palindrome\n",N);
    }
