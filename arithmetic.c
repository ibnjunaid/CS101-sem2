#include<stdio.h>

int main(){

	int operand1,operand2;
	char operator;
	
	printf("Enter two operands:");
	scanf("%d%d",&operand1,&operand2);
	
	printf("Enter operator");
	scanf("%c",&operator);
	
	switch(operator){
		case '+' : printf("The sum is :%d",operand1 + operand2);
			   break;
		case '-' : printf("The diffrence is :%d",operand1 - operand2);
			   break;
		case '*' : printf("The product is :%d",operand1 * operand2);
			   break;
		case '/' : printf("The quotient is :%d",operand1 / operand2);
			   break;
		case '%' : printf("The remainder is :%d",operand1 % operand2);
			   break;
		default  : printf("Wrong Choice");
			   break;
	}

}

