//#include<stdio.h>

//int main(){
//	int battery = 100;

//**** Battery Low****

//	while(battery>0)
//	{
//		printf("Battery : %d\n",battery);
//		battery-=10;
//	}
//	printf("Battery Empty ");
//}

//int main()
//{
//	int i=2;
//	//****Even Number****
//	while(i<=100){
//		printf("%d\n",i);
//		i+=2;
//	}
//	return 0;
//}

#include<stdio.h>

int main(){
	
	int i=0,num=4,sum=0;
	
	while(i<3){
		sum=sum+num;
		num++;
		i++;
	}
	printf("Sum of 4,5,6 is: %d\n",sum);
	
	return 0;
}

