#include <stdio.h>
/*
두 가격 중 더 큰 값을 반환하는 함수
딸기 가격 입력받고 귤 가격을 입력받아서
더 비싼 과일의 가격을 출력
*/

int max(int price1, int price2)
{
	if (price1 > price2) {
		return price1;
	}
	else {
		return price2;
	}
}

int main()
{
	int price1, price2;
	printf("딸기의 가격을 입력하세요 : ");
	scanf_s("%d", &price1);

	printf("귤의 가격을 입력하세요 : ");
	scanf_s("%d", &price2);

	int expensive = max(price1, price2);
	printf("더 비싼 과일의 가격 : %d원", expensive);
	return 0;
}