#include <stdio.h>
int main(void)
{
	/*
	�ڷ��� ������ = �ʱⰪ;
	while(����){
		�ݺ���Ű���� �ϴ� �ڵ� �ۼ�;
		������;
	}
	*/

	int c_class = 1;
	while (c_class <= 10) {
		printf("c��� ���� %d \n", c_class);
		c_class++;
	}

	// while���� if���� Ȱ���� 6���� �� ���
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d \n", six);
		}
		six++;
	}
	return 0;
}