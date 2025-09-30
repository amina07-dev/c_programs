#include<stdio.h>

//int main()
//{
//	int i,j;
//	for(i=1;i<=3;i++){
//		for(j=1;j<=5;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//OutPut:
//* * * * *
//* * * * *
//* * * * *

int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
//OutPut:
//*
//* *
//* * *
//* * * *
//* * * * *

//int main()
//{
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=i;j<=5;j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//OutPut:
//* * * * *
//* * * *
//* * *
//* *
//*

