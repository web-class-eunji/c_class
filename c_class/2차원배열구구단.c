#include <stdio.h>
int main(void)
{
	// 2���� �迭�� ���� �� �� �������� ����غ�����

	int gugudan[8][9];
	int i, j;
	for (i = 0;i < 8;i++) {
		printf("%d��\n", i + 2);
		for (j = 0; j < 9;j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
			printf("%d * %d = %d\n", i + 2, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}
	return 0;
}