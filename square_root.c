#include<stdio.h>

int n =16;

int getSquareRoot(){
	int i;
	for(i=1;i<=n;i++){
		if(i*i==n){
			return i; // Found exact square root
		}
		
	}
 return -1; // Not a perfect square
}

int main()
{
int result = getSquareRoot();

    if (result != -1)
        printf("Square root of %d is %d\n", n, result);
    else
        printf("%d is not a perfect square\n", n);

    return 0;
}

