#include<stdio.h>

int main(){
	///Using an array store and display marks of 5 subjects
	
	/*int marks[5];
	int i;
	
	printf("Enter subject marks: \n");
	for(i=0;i<=5;i++){
		scanf("\n %d ",&marks[i]);
	}
	
	printf("Updated Arrays List");
	for(i=0;i<=5;i++){
		printf("\n marks[%d]= %d\n",i, marks[i]);
	}*/
	
	// SUM OF ARRAY ELEMENTS
	
	/*int arr[]={10, 15, 30, 40, 60, 80, 99, 54, 87};
	int sum=0;
	int length = sizeof(arr)/sizeof(arr[0]);
	int i;
	
	for(i=0;i<length;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of array elements = %d\n", sum);
	*/
	
// Reverse an array

/*	int arr[]={10, 15, 30, 40, 60, 80};
		int i;
		
		printf("Original array:\n");
		for(i=0;i<6;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\nReversed array:\n");
		for(i=5;i>=0;i--){
			printf("%d ", arr[i]);
		}*/
		
//array copy program 
		
	/*	int arr2[5]={10, 15, 30, 40, 60, 80};
		int arr3[5];
		int i;
		for(i=0;i<5;i++){
			arr3[i]=arr2[i];
		}
		printf("copied arry");
		for(i=0;i<5;i++){
			printf("[%d] = %d\n", i, arr3[i]);
		}*/
		
//count even Or odd

	/*int arr4[6]={1,2,3,4,5,6};
	int even = 0, odd = 0;
	int i ;
	for(i=0;i<6;i++){
		if(arr4[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	printf("Even Count = %d, Odd Count = %d",even,odd);*/
	
	
//Find Maximum element

	int number[6]={12,34,5,6,7,90};
	int max = number[0];
	int i;
	
	for(i=1;i<6;i++){
		if(number[i]>max){
			max =number[i];
		}
	}
	printf("Maximum element in the array is: %d\n", max);
			
	return 0;
}
