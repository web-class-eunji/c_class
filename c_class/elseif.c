#include <stdio.h>
int main(void)
{
	/*
	if(���ǹ�) {
		������ ������ ��� ����
	}
	else if (����2) {
		����2�� ������ ��� ����
	}
	else if (����3) {
		����2�� ������ ��� ����
	}
	else if (����4) {
		����2�� ������ ��� ����
	}
	else {
		��� ������ �������� ���� ���
	}
	*/

	int num_a;
	printf("���� �Է� : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("����� \n");
	}
	else if (num_a == 1) {
		printf("������ \n");
	}
	else { // 4���� �۰� 1���� ũ�ٸ�
		printf("���丮 \n");
	}

	//������ 90�� �̻��̶�� A����, �� ���߾��!  ���
	// �Է¹��� ���� ** �� 80 �̻��̶�� B����
	// �Է¹��� ���� ** �� 70 �̻��̶�� C����
	// �Է¹��� ���� ** �� 60 �̻��̶�� D����
	// �Է¹��� ���� ���� ���� ���ٸ� ����� ���

	int score;
	printf("���� �Է� : ");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("%d �� A ���� �� ���߾��\n",score);
	}
	else if (score >= 80) {
		printf("%d �� B ����\n", score);
	}
	else if (score >= 70) {
		printf("%d �� C ����\n", score);
	}
	else if (score >= 60) {
		printf("%d �� D ����\n", score);
	}
	else {
		printf("����� \n");
	}

	//�������� ������
	// 0~ 7�� ���ƴ� 800��
	//8~19 �л� 1,200��
	// 20 ~ 34�� û���� 1,600
	// 35~59�� �߳��� 2,000
	// 60 ~ 150�� ��� ������� �����Դϴ�.
	// ���� �߸����� ����.. ����� �ƴѵ�.. 
	// || / && / !

	int userAge;
	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &userAge);

	if (userAge >= 0 && userAge <= 7) {
		printf("0~ 7�� ���ƴ� 800��");
	}
	else if (userAge >= 8 && userAge <= 19) {
		printf("8~19 �л� 1,200��");
	}
	else if (userAge >= 20 && userAge <= 34) {
		printf("20 ~ 34�� û���� 1,600");
	}
	else if (userAge >= 35 && userAge <= 59) {
		printf("35~59�� �߳��� 2,000");
	}
	else if (userAge >= 60 && userAge <= 150) {
		printf("60 ~ 150�� ��� ������� �����Դϴ�.");
	}
	else {
		printf("�ͽ��ΰ�..");
	}

	return 0;
}