#include <stdio.h>
int main(void)
{
	/*
	for���� �극��ũ��
	for(�ʱⰪ;���ǽ�;������){
		break;
		������ �ڵ�;
	}

	while���� �극��ũ
	�ڷ��� ������= �ʱ�ȭ;
	while(���ǽ�){
		break;
		������ �ڵ�;
		������;
	}
	*/

	for (int i = 0; i <= 10; i++) {
		if (i == 6) {
			break;
		}
		printf("%d \n", i);
	}

	printf("\n");

	int i = 0;
	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d \n",i);
		i++;
	}
	return 0;
}