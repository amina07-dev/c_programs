#include<stdio.h>
#define PI 3.14159

float areaofCircle(){
	float radius=7;
	return PI * radius * radius;
}
int main()
{
	printf("Area of Circle = %.2f \n",areaofCircle());
}
