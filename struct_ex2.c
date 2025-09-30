#include<stdio.h>

struct Student{
	int rollno;
	char name[50];
	float marks;
};

int main()
{
	int n;
	int i;
	
	printf("Enter the Number of Student: ");
	scanf("%d",&n);
	
	struct Student students[n];

	for(i=0;i<n;i++){
		printf("Enter details for student %d : \n",i+1);
		printf("Roll no : ");
		scanf("%d",&students[i].rollno);
		printf("Name :");
		scanf("%s",students[i].name);
		printf("Marks: ");
        scanf("%f", &students[i].marks);

	}
	
		printf("\n--- Student Details ---\n");
    	for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

	
	return 0;
}


//int main(){
//	typedef int abcd;
//	abcd a,b,sum;
//	a=10;
//	b=20;
//	sum=a+b;
//	
//	printf("sum : %d",sum);
//}
