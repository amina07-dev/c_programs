#include<stdio.h>

int main(){
	FILE *fp;
	int numbers[5]={10,20,30,40,50};
	
	fp = fopen("C:\\File_Handling\\student_details.txt", "wb");
		if(fp==NULL){
			printf("File doesnot exist or not opening");
		return 1;
		}
		fwrite(numbers,sizeof(int),5,fp);
		fclose(fp);
		printf("Binary data written sucessfully");
		return 0;
}
