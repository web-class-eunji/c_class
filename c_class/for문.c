#include <stdio.h>
int main(void)
{
	/*
	for(�ʱⰪ; ���ǽ�; ������){
		���ǽ��� ���̶�� �����ų �ڵ�;
	}
	*/

	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d �� ���� : %d \n", i, i * i);
	}
	return 0;
}