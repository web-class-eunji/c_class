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

	for (i = 1; i <= 3; i++) { //�ٱ� �ݺ���
		// 1~3���� ���� ( �� )
		for (j = 1; j <= 5; j++) {
			printf("%d �� %d �� \n", i, j);
		}
		printf("\n");
	}

	return 0;
}