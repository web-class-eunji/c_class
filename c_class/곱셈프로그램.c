#include <stdio.h>
/*
* 숫자 2가지를 가지고 곱셈 하는 함수 생성
* 숫자 2가지는 사용자가 입력
* 곱하기 연산 결과 : 0 X 0 = 00  출력
*/

int multiply(int a, int b)
{
	return a * b;
}
int main(void)
{
	int num1, num2;
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("두번째 숫자를 입력해주세요 : ");
	scanf_s("%d", &num2);

	int result = multiply(num1,num2);
	printf("곱하기 연산 결과 : %d X %d = %d", num1, num2, result);
	return 0;
}