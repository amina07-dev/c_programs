#include <stdio.h>

int main()
{
	int appleQty,oilQty,milkQty;
	int applePrice,oilPrice,milkPrice;
	int total;
	int paid;
	applePrice =50;
	oilPrice = 25;
	milkPrice= 30;
	
	printf("Enter Quantity of Apple (kg)");
	scanf("%d",&appleQty);
	printf("Enter Quantity of Oil (ltr)");
	scanf("%d",&oilQty);
	printf("Enter Quantity of Milk (ltr)");
	scanf("%d",&milkQty);
	
	total=(appleQty*applePrice)+(oilQty*oilPrice)+(milkQty*milkPrice);
	printf("\nTotal bill : %d\n",total);
	
	printf("Enter amount paid by Customer? ");
	scanf("%d",&paid);
	
	printf("Change to return: %d\n",paid-total);
		
	return 0;
	
	
	
}
	
