#include <stdio.h>
int main(void)
{
	// ����ڰ� 20�� �̻��̸� 1280�� �̸��̶�� 800���� �޴� ���α׷� �����ϱ�
	int userAge;
	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &userAge);
	int ageCheck = userAge >= 20 ? 1280 : 800;
	printf("%d ���� ����ö ����� %d �Դϴ�. ", userAge, ageCheck);
	return 0;
}