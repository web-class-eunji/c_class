#include <stdio.h>
#define NAME_LEN 10
#define PHONE 20
#define BRAND_NAME 20

typedef int integer; // 기존 자료형의 명령어에 또다른 명령어를 부여


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
	//// 구조체 : 여러개의 타입을 묶어서 새로운 타입을 만들때
	//struct customer c1,c2;
	////c1.number = 1;
	//printf("이름 : ");
	//gets_s(c1.name, NAME_LEN);
	//
	//printf("전화번호 : ");
	//gets_s(c1.phone, PHONE);

	//printf("고객번호 : ");
	//scanf_s("%d", &c1.number);


	//while (getchar() != '\n');

	//printf("이름 :");
	//gets_s(c2.name, NAME_LEN);

	//printf("전화번호 : ");
	//gets_s(c2.phone, PHONE);

	//printf("고객번호 : ");
	//scanf_s("%d", &c2.number);


	//printf("\n\n *** 고객 정보 출력 *** \n\n");
	//printf("%3d %-20s %-20s%8d\n", 1, c1.name, c1.phone, c1.number);
	//printf("%3d %-20s %-20s%8d\n", 2, c2.name, c2.phone, c2.number);


	car myCar = { "Tesla",2023 };
	car* ptr = &myCar;

	printf("브랜드 : %s\n", ptr->brand); // (*ptr).brand
	printf("연식 : %d \n", ptr->year); // myCar.year 동일
	 
	return 0;
}