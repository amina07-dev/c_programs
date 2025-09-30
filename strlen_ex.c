#include<stdio.h>
#include<string.h>

int main(){
	/*char s1[10]= "Amina";
	char s2[20]= "Shaikh";
	
	if(strcasecmp(s1,s2)==0)
	
		printf("String are Equal");
			
	else
		printf("String are not Equal");	*/

//******Basic password authentication mechanism********
		
	/*char password[20],input[20];
	strcpy(password,"admin123");
	
	printf("Enter Password\n");
	scanf("%s",&input);
	
	if(strcmp(password,input)==0)
		printf("Access  Granted");
		else
		printf("Access  Denied");*/
	
	
//****combines three predefined strings into a single output.******		
	/*char name1[10]= "Amina";
	char name2[20]= "Shaikh";
	char str[20]= "Yeola";
	
	strcat(name1,name2);
	strcat(name1,str);
	
	printf("Concatenated String = %s",name1);*/
	
	
	char str[50];
	printf("Enter Sting");
	//gets(str);//unsafe
	fgets(str,sizeOf(str),stdin);///safe
	displayString(str);
	
	return 0;
}

void displayString(char str[]){
	printf("Entered String");
	puts(str);
}
