#include<stdio.h>


struct EmployeeS{
	int id;
	char name[20];
	char designation[20];
	int salary;
};
union EmployeeU{
	int id;
	char name[20];
	char designation[20];
	int salary;
};
int main(){
	struct EmployeeS e1;
	printf("Size of Struct = %d \n",sizeof(e1));

	union EmployeeU e2;
	printf("Size of Union = %d \n",sizeof(e2));
	
	return 0;
}
