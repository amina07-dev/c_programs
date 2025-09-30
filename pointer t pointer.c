#include<stdio.h>

int main(){
	
	int a = 10;//Normal variable
	int *p;//Pointer to int
	int **pp;//Pointer to Pointer
	
	p = &a;
	pp = &p;
	
	printf("Value of a = %d",a);
	
	printf("Address of a = %u",&a);
	return 0;
}
