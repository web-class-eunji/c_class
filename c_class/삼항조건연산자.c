#include <stdio.h>
int main(void)
{
	// ���ǽ� ? ������ �̰� ��µ� (true) : Ʋ���� �̰� �����(false)
	int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d\n", twenty);

	// ���� 1 : ����ڿ��� ���ڸ� �Է¹޾Ƽ� �� ���ڰ� ¦����� 0�� ����ϰ� Ȧ����� 1�� ���
	// ��� �޽��� : ����� �Է��� ���ڴ� *�̸� ��� : *

	int inputNumber;
	int result2;
	printf("�����ϴ� ���ڸ� �Է��غ�����:");
	scanf_s("%d", &inputNumber);
	result2 = inputNumber % 2 == 0 ? 0 : 1;
	printf("����� �����ϴ� ���ڴ� %d�̸�, ��� : %d", inputNumber, result2);
	return 0;
}
