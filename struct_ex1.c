#include<stdio.h>

struct Employee{
	int id;
	char name[20];
	char designation[20];
	int salary;
};

int main(){
	struct Employee emp;
	printf("Enter Emp id: ");
	scanf("%d",&emp.id);
	
	printf("Enter Emp Name: ");
	scanf("%s",emp.name);
	
	printf("Enter designation: ");
	scanf("%s",emp.designation);
	
	printf("Enter Salary: ");
	scanf("%d",&emp.salary);
	
	printf("Details of Employee \n");
	printf("Employee Name = %d \n",emp.id);
	printf("Employee Name = %s \n",emp.name);
	printf("Employee designation = %s \n",emp.designation);
	printf("Employee Salary = %d \n",emp.salary);
	
	return 0;
} 
