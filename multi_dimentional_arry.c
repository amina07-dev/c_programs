//#include<stdio.h>
//
//int main(){
//	int arr[2][3] = {{1,2,3},{4,5,6}};
//	int i,j;
//	
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//		printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	
//}

//Anti-diagonal elements of a 3�3 matrix.
#include <stdio.h>

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;
    for(i = 0; i < 3; i++) {
            printf("%d ", arr[i][2-i]);
    }

    return 0;
}
