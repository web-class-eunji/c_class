#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�1){
		if(���ǽ�2){
			���ǽ� 1�� 2�� ��� ������ ��� �ڵ� ����	
		}
	}
	*/

	int studentNum = 250108, studentNumCheck;
	int password = 112233, passwordCheck;

	printf("�й��� �Է����ּ��� : ");
	scanf_s("%d", &studentNumCheck);

	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf_s("%d", &passwordCheck);

	if (studentNum == studentNumCheck) {
		if (password == passwordCheck) {
			printf("%d �� �α��� �Ǿ����ϴ�.", studentNumCheck);
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.");
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�.");
	}
	return 0;
}