#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A[6] = {23,31,3,19,54,12}; /*設定陣列的初始值*/
	int i, j, min, t;
	for( j = 0; j < 6 ; j++ ) printf("%4d",A[j]);
	printf("\n");
	for( i = 0 ; i < 5 ; i++ ) {
		min = i; /* 假設目前最小數是 A[min] */
		for( j = i+1 ; j < 6 ; j++ ) 
			if(A[min] > A[j]) min = j;
		t = A[min]; A[min] = A[i]; A[i] = t;  // 資料交換
		for( j = 0; j < 6; j++ ) printf("%4d",A[j]);
		printf("\n");
	}
	system("pause"); return (0);
}