#include<stdio.h>


int findMax(){
	int a=10,b=25,c=115;

	int max;
	
	if(a>b && a>c){
		return a;		
	}else if(b>c){
			return b;
	}else{
		return c;
	}
	
}
int main(){
	printf("Maximum of three is : %d\n",findMax());
	return 0;
}
