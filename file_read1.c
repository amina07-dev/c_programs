#include<stdio.h>

int main()
{
	FILE *fp;
	char str[200];
	fp = fopen("C:\\File_Handling\\write1.txt","r");
	
		if(fp==NULL){
		printf("File doesnot exist or not opening");
		return 1;
		
	}
	printf("File Content:\n");
	while(fgets(str,sizeof(str),fp) != NULL){
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
