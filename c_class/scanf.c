#include <stdio.h>
int main(void)
{
	// 1. �Է��� �����Ϳ� �����ϴ� �ڷ���
	// 2. �Է��� �����Ͱ� ����� �޸� ���� (����)
	// scanf -> scanf_s

	int num;
	//scanf_s("%d", &num);
	//scanf_s("%d\n", &num); // X
	//scanf_s("%d", &num); // �Է��� ���� ����
	//printf("\n"); // �ٹٲ��� ���

	//scanf_s("�Է� : %d", &num); //X
	printf("�Է� : ");
	scanf_s("%d", &num);

	int x, y, z,total;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &x, &y, &z);
	total = x + y + z;
	printf("%d + %d + %d = %d \n", x, y, z, total);

	float fnum;
	printf("�Ǽ� �Է� : "); 
	scanf_s("%f", &fnum);
	printf("�Էµ� �� : %.2f \n", fnum);

	printf("%10.3f", 152.49861);
	// 152.499 

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� �� : %.2f", scanf_pi);


	


	return 0;
}