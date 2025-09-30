#include<stdio.h>

int main(){
	
	FILE *fp;
	
	fp = fopen("C:\\File_Handling\\write1.txt","a");
	
	if(fp==NULL){
		printf("File doesnot exist or not opening");
		return 1;
		
	}
	fprintf(fp,"Hello this is Kasif shk\n");
	fprintf(fp,"Hello this is Asiya shaikh \n");
	
	fclose(fp);
	printf("Data Appended sucessfully");
	return 0;
	
}
