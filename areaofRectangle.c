#include<stdio.h>

void areaOfRectangle(int length, int width) {
    
    printf("Area of rectangle = %d\n", length * width);
}


int main()
{
	int length,width;
	
	printf("Enter length of rectangle: ");
	scanf("%d",&length);
	
	printf("Enter width of rectangle: ");
	scanf("%d",&width);
	
	areaOfRectangle(length,width);
	
	return 0;
}
