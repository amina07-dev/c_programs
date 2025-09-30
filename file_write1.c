#include<stdio.h>

int main(){
	
	FILE *fp;
	
	fp = fopen("C:\\File_Handling\\write1.txt","w");
	
	if(fp==NULL){
		printf("File doesnot exist or not opening");
		return 1;
		
	}
	fprintf(fp,"Hello this is Amina shk\n");
	fprintf(fp,"Hello this is Sara shaikh \n");
	
	fclose(fp);
	printf("Data written sucessfully");
	return 0;
	
}
