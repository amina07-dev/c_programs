#include<stdio.h>

int main(){
	int x = 10;
	int *a, *b;
	a = &x;
	
	printf("\n Address of x = %u",a);
	printf("\n Address of x = %u",b);
	
	return 0;

}
