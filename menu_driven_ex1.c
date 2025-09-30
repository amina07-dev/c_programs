#include<stdio.h>
int main(){
	int choice, balance=1000, amount;
	char conti;
	
	do{
		printf("-----ATM Menu-----\n");
		printf("1.Check Balance \n");
		printf("2.Deposite Money \n");
		printf("3.Widraw Money \n");
		printf("0.Exit \n");
		printf("--------------- \n");
		
		printf("Enter Your Choice : \n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Your Balance is = %d",balance);
				break;
			case 2:
				printf("Enter Amount to Deposite : ");
				scanf("%d",&amount);
				balance+=amount;
				printf("Deposited Successfully, New Balance is =%d",balance);
				break;
			case 3:
				printf("Enter Amount to be withdraw : ");
				scanf("%d",&amount);
				if(amount<=balance){
					balance-=amount;
					printf("withdraw Successfully, New Balance is =%d",balance);
				}
				else{
					printf("Insufficient Balance \n");
				}
				break;
			case 0:
					printf("Exiting Atm.....\n");
					break;
			default:
				printf("Invalid Choice\n");
		}
		if(choice !=0)
		{
			printf("\n Do you want to continue (y/n):");
			scanf(" %c",&conti);
		}
		else{
			conti='n';
		}
	}while(conti=='y' || conti=='Y');
	
	
	return 0;
}
