#include<stdio.h>

int main()
{
	int choice,num1,num2,result;
	char contin;
	
	do{
		printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        
        switch (choice){
        	case 1:
        		result = num1+num2;
        		printf("Result:%d\n",result);
        		break;
        		
        	case 2:
        		result = num1-num2;
        		printf("Result:%d\n",result);
        		break;
        		
        	case 3:
        		result = num1*num2;
        		printf("Result:%d\n",result);
        		break;
        		
        	case 4:
        		result = num1/num2;
        		printf("Result:%d\n",result);
                break;
            default:
                printf("Invalid choice. Please select between 1 and 4.\n");

		}
		printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &contin);

	}while(contin == 'y' || contin == 'Y');
	
	printf("Program Ended.\n");
	return 0;
	 
}
