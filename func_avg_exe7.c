#include<stdio.h>

float getAverage(int x,int y,int z){
	return (x + y + z)/3;
}
int main(){
	int a=39,b=70,c=75;
	float average;
	
	average =getAverage(a,b,c);
	printf("Average of %d, %d, and %d is %.2f\n", a, b, c, average);
	
	return 0;
	
}
