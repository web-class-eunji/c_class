#include <stdio.h>
int main(void)
{
	// �迭�� �̸�(������ ����)
	// �迭�� ���� �ڷ���
	// �迭�� ���� ( �迭�� ���� �� �������� ����)

	// int num[] = { 1,2,3 };
	
	int a[5] = {1,2,3,4,5};
	int max;
	max = a[0];
	a[0] = 100;

	for (int i = 0; i < 5; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("�ִ밪 : %d \n", max);
	printf("a[1] �� : %d \n", a[1]);



	return 0;
}