#include<stdio.h>

int main(){
	int num1,num2;
	char op;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Enter opration (+,-,*,/): ");
	scanf(" %c",&op);
	
	switch(op){
		
		case'+':
			printf("Sum: %d", num1 + num2);
			break;
		case'-':
			printf("Difference: %d", num1 - num2);
			break;
		case'*':
			printf("Multiplication: %d", num1 * num2);
			break;
		case'/':
			printf("Divison: %d", num1 / num2);
			break;
		default:
			printf("Invalid operation!");
		
	}
	return 0;
}
