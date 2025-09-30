#include<stdio.h>

//int main(){
//int i;
//	for( i=1;i<=10;i++){
//		printf("%d\n",i);
//	}
//	return 0;
//}

//int main(){
//	int i;
// 5 table
//	for(i=1;i<=10;i++){
//		printf("5 * %d = %d\n",i,5*i);
//	}
//	return 0;
//}

//int main(){
//	int i;
// skipping number
//	for(i=0;i<=20;i+=2){
//		printf("%d\n",i);
//	}
//	return 0;
//}

//int main(){
//	int i,j;
//	//prints i=1 j=1, i=2 j=2, and so on up to i=5 j=5:
//
//	for(i=1;i<=5;i++)
//	{
//		j=i;
//		printf("i=%d j=%d\n",i,j);
//		
//	}
//	return 0;
//}


int main(){
	int i,j;

	for(i=1,j=5;i<=5,j>=1;i++,j--)
	{
	//prints i=1 j=5, i=2 j=4

		printf("i=%d j=%d\n",i,j);
		
	}
	return 0;
}
