#include <stdio.h>

void sayHello()
{
	printf("Hello World \n");
}

int add(int a, int b)
{
	return a + b;
}

void name(char* name)
{
	printf("Hello, %s \n", name);
}

int main(void)
{
	/*
	��ȯ�� �Լ��̸�(�Ű�����)
	{
		return ������ ��;
	}
	��ȯ�� : �Լ��� ����� ��Ÿ�� �� ����� �ڷ���
	�Լ��̸� : ȣ���� �� ����� �̸�(�����ڸ������)
	�Ű����� : �Լ��� �۾��� �����ϱ� ���� �ʿ��� �Է°�(�������� ����)
	return : �Լ��� �۾��� ���� �� ȣ���� ������ �����ִ� ��ɾ� (void �� �� ��������)
	*/
	sayHello();
	int result = add(5,3);
	printf("result : %d \n", result);
	name("����");


	return 0;
}