#include<stdio.h>

int main(){
	
	int a = 10;//Normal variable
	int *p;//Pointer to int
	int **pp;//Pointer to Pointer
	
	p = &a;
	pp = &p;
	
	printf("Value of a = %d\n",a);//10
	
	printf("Address of a = %u\n",&a);//6487620
	
	printf("p Stores = %u (Address of a)",p);//6487620
	
	printf("\n *p (value at p) = %d ",*p);//10
	
	printf("\n pp Stores = %u (Address of p)",pp);
	
	printf("\n *pp (value at pp) = %u (Address of a)",*pp);
	
	printf("\n **pp (value at pp) = %u (Address of a)",**pp);
	return 0;
}
