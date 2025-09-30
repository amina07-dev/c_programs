#include<stdio.h>

int main()
{
	FILE *fp;
    char name[50];
    int age;
    float marks;

	fp = fopen("C:\\File_Handling\\student_details.txt", "a");
	if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
	printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

	printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%f", &marks);
    
    fprintf(fp, "Name: %sAge: %d\nMarks: %.2f\n\n", name, age, marks);

    fclose(fp);
    printf("Student details saved successfully.\n");

	return 0;
}
