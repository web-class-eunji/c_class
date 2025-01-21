#include <stdio.h>
int main(void)
{
	// 배열의 이름(변수와 동일)
	// 배열에 담을 자료형
	// 배열의 길이 ( 배열에 포함 될 데이터의 개수)

	// int num[] = { 1,2,3 };
	
	int a[5] = {1,2,3,4,5};
	int max;
	max = a[0];
	a[0] = 100;

	for (int i = 0; i < 5; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("최대값 : %d \n", max);
	printf("a[1] 는 : %d \n", a[1]);



	return 0;
}