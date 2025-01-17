#include <stdio.h>
int main(void)
{
	//+, -, *, / 
	// 변수 : 문자형 1개 / 정수형 2개
	// 나눗셈 특수처리
	// 연산자, 숫자 따로 받아오기

	char operator;
	int num1, num2;

	printf("연산자를 입력하세요(+,-,*,/) : ");
	scanf_s("%c", &operator,1);

	printf("두 숫자를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	switch (operator)
	{
	case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2);
		break;
	case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case '/' :
		if (num2 != 0) {
			printf("%d / %d = %d\n", num1, num2, num1 / num2);
		}
		else {
			printf("0으로 나눌 수 없습니다. \n");
		}
		break;

	default: printf("유효하지 않은 연산임");
		break;
	}
	return 0;
}