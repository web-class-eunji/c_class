#include <stdio.h>
#define NAME_LEN 10
#define PHONE 20
#define BRAND_NAME 20

typedef int integer; // ���� �ڷ����� ��ɾ �Ǵٸ� ��ɾ �ο�


struct customer
{
	char name[NAME_LEN];
	char phone[PHONE];
	int number;
};

struct car
{
	char brand[BRAND_NAME];
	int year;
};

typedef struct car car;
typedef struct customer ctm;

int main(void)
{
	//// ����ü : �������� Ÿ���� ��� ���ο� Ÿ���� ���鶧
	//struct customer c1,c2;
	////c1.number = 1;
	//printf("�̸� : ");
	//gets_s(c1.name, NAME_LEN);
	//
	//printf("��ȭ��ȣ : ");
	//gets_s(c1.phone, PHONE);

	//printf("����ȣ : ");
	//scanf_s("%d", &c1.number);


	//while (getchar() != '\n');

	//printf("�̸� :");
	//gets_s(c2.name, NAME_LEN);

	//printf("��ȭ��ȣ : ");
	//gets_s(c2.phone, PHONE);

	//printf("����ȣ : ");
	//scanf_s("%d", &c2.number);


	//printf("\n\n *** �� ���� ��� *** \n\n");
	//printf("%3d %-20s %-20s%8d\n", 1, c1.name, c1.phone, c1.number);
	//printf("%3d %-20s %-20s%8d\n", 2, c2.name, c2.phone, c2.number);


	car myCar = { "Tesla",2023 };
	car* ptr = &myCar;

	printf("�귣�� : %s\n", ptr->brand); // (*ptr).brand
	printf("���� : %d \n", ptr->year); // myCar.year ����
	 
	return 0;
}