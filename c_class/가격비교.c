#include <stdio.h>
/*
�� ���� �� �� ū ���� ��ȯ�ϴ� �Լ�
���� ���� �Է¹ް� �� ������ �Է¹޾Ƽ�
�� ��� ������ ������ ���
*/

int max(int price1, int price2)
{
	if (price1 > price2) {
		return price1;
	}
	else {
		return price2;
	}
}

int main()
{
	int price1, price2;
	printf("������ ������ �Է��ϼ��� : ");
	scanf_s("%d", &price1);

	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &price2);

	int expensive = max(price1, price2);
	printf("�� ��� ������ ���� : %d��", expensive);
	return 0;
}