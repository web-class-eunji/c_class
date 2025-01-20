#include <stdio.h>
int main(void)
{
	/*
		for(){
			for(){
			}
		}
   */

	int i, j;

	for (i = 1; i <= 3; i++) { //바깥 반복문
		// 1~3까지 증가 ( 행 )
		for (j = 1; j <= 5; j++) {
			printf("%d 행 %d 열 \n", i, j);
		}
		printf("\n");
	}

	return 0;
}