#include<stdio.h>

int main(){
	FILE *fp;
	int numbers[5];
	int i;
	fp = fopen("C:\\File_Handling\\student_details.txt", "rb");
		if(fp==NULL){
			printf("File doesnot exist or not opening");
		return 1;
		}
		fread(numbers,sizeof(int),5,fp);
		fclose(fp);
		printf("Binary data\n");
		for(i=0;i<5;i++){
			printf("%d ",numbers[i]);
		}
		return 0;
}
