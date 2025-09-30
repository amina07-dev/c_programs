#include<stdio.h>

int main(){
	
	int arr[5]={11,32,4,22,34};
	int i,j,temp;
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
	printf("Sorted arry\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
