//q.23 Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Canceled.
#include<stdio.h>
int main()
{
	int la,fi;
	printf("Enter the no. of late days : ");
	scanf("%d",&la);
	if (la<=0)
	printf("no fine\n");
	else if(la>30)
	printf("Membership canceled due to excessive delay\n");
	else
	{
		if(la<=5)
		fi = la*2;
		else if(la<=10)
		fi = (5*2)+(la-5)*4;
		else
		fi = (5*2) + (5*4) + (la-10)*6;
		printf("total fine: RS. %d\n",fi);
	}

}
