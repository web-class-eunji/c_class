#include <stdio.h>

void hello(char* name)
{
	printf("�ȳ��ϼ��� %s�� \n", name);
}

// ����ڿ��� �̸��� �Է¹޾Ƽ�  �ȳ��ϼ��� **�� �̶�� �λ��ϴ� ���α׷�
int main(void)
{
	char name[20];
	printf("�̸��� �Է����ּ��� : ");
	scanf_s("%s", name,(unsigned)sizeof(name));
	hello(name);

	return 0;
}