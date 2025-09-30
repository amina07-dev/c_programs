#include<stdio.h>

int main()
{
	int ticket,idProof,luggage;
	
	printf("Do you have a ticket? (1 = yes, 0 = No)");
	scanf("%d",&ticket);
	
	if(ticket==1)
	{
		printf("Do you have a Id Proof ? (1 = yes, 0 = N0)");
		scanf("%d",&idProof);
		
			if(idProof==1)
			{
				printf("Is  Luaggage within 20 kg ? (1 = yes, 0 = N0)");
				scanf("%d",&luggage);
				
				if(luggage==1)
				{
					printf("Check in Successfully");
				}
				else {
					printf("Extra Luggage charges apply");
				}
			}
			else{
				printf("Id Proof Required");
			}		
		
	}
	else{
		printf("No Ticket, No Entry");
	}
	return 0;
}
