#include <stdio.h>
/*
* ���� 2������ ������ ���� �ϴ� �Լ� ����
* ���� 2������ ����ڰ� �Է�
* ���ϱ� ���� ��� : 0 X 0 = 00  ���
*/

int multiply(int a, int b)
{
	return a * b;
}
int main(void)
{
	int num1, num2;
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &num2);

	int result = multiply(num1,num2);
	printf("���ϱ� ���� ��� : %d X %d = %d", num1, num2, result);
	return 0;
}