#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int A,B,C;
	printf("請輸入三個相異的數\n");
	printf("A = "); scanf("%d",&A);
	printf("B = "); scanf("%d",&B);
	printf("C = "); scanf("%d",&C);
	if( A>B && A>C) /* A 最大 */
		printf("A=%d 大於 B=%d 與 C=%d\n",A,B,C);
	else if( B>A && B>C) /* B 最大 */
		printf("B=%d 大於 A=%d 與 C=%d\n",B,A,C);
	else if( C>A && C>B) /* C 最大 */ 
		printf("C=%d 大於 A=%d 與 B=%d\n",C,A,B);
    system("pause");
	return 0;
}
