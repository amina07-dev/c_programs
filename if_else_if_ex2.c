#include<stdio.h>

int main(){
	
	int temp;
	
	printf("Enter the Temperature in Celsius: ");
	scanf("%d",&temp);
	
	if(temp>=40)
	{
		printf("Very Hot\n");
	}
	else if(temp>=30)
	{
		printf("Hot\n");	
	}
	else if(temp>=20)
	{
		printf("Moderate\n");	
	}
	else if(temp>=10)
	{
		printf("Cold\n");	
	}
	else 
	{
		printf("Very cold\n");	
	}
	
	return 0;
}
