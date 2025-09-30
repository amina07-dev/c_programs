#include<stdio.h>

void calculatePer(float obtain,float total)
{
	float percentage=(obtain/total)*100;
	printf("Percentage = %.2f%%\n", percentage);

}
int main()
{
	float marksObtain,totalMarks;
	
	printf("Enter marks obtained: ");
	scanf("%f",&marksObtain);
	
	printf("Enter total marks: ");
	scanf("%f",&totalMarks);
	
	calculatePer(marksObtain,totalMarks);
	
	return 0;
	
}
