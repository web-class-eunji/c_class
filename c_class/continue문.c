#include <stdio.h>
int main(void)
{
	/*
	for(�ʱ� ; ���� ; ����){
		continue;
		������ �ڵ�
	}

	while(����) {
		������;
		continue;
		������ �ڵ�;
	}
	*/

	int for_continue;
	for (for_continue = 1;for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) { //¦�����
			continue;
		}
		printf("%d \n", for_continue);
	}

	int while_continue = 1;
	while (while_continue <= 10) {
		while_continue++;
		if (while_continue % 2 != 0) { //Ȧ�����
			continue;
		}
		printf("%d \n", while_continue);
	}


	return 0;
}