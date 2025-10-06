//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() 
{
	int num1,num2;
    	char op;

    	printf("Enter your first number: ");
    	scanf("%d",&num1);

    	printf("Enter your second number: ");
    	scanf("%d",&num2);

    	printf("Enter your operator (+, -, *, /, %%): ");
    	scanf(" %c",&op);  // Note the space before %c to consume any leftover newline

    	switch(op) 
	{
        	case '+':
         	printf("Result: %d\n",num1+num2);
            	break;
        	case '-':
            	printf("Result: %d\n",num1-num2);
            	break;
        	case '*':
            	printf("Result: %d\n",num1*num2);
            	break;
        	case '/':
            	if (num2 != 0)
                printf("Result: %d\n",num1/num2);
            	else
                printf("Error: Division by zero is not allowed.\n");
            	break;
        	case '%':
            	if(num2 != 0)
                printf("Result: %d\n",num1%num2);
            	else
                printf("Error: Modulor by zero is not allowed.\n");
            	break;
        	default:printf("Invalid operator.\n");
   	 }
}
