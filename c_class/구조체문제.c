#include <stdio.h>
struct Student
{
	char name[20];
	int age;
	int grade;
};

int main(void)
{
	/*
	�л� ����ü ����� ( ��� : �̸�,����,�г�)
	����ü�� �迭�� ���� �� �ʱ�ȭ(2��)
	��� �л��� ������ ���
	*/

	struct Student students[2] = {
		{"������",19,3},
		{"ȫ�浿",21,100}
	};

	for (int i = 0; i < 2; i++) {
		printf("�̸� : %s, ���� : %d, �г� : %d\n", students[i].name, students[i].age, students[i].grade);
	}
	
	return 0;

}