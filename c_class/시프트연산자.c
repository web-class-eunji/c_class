#include <stdio.h>
int main(void)
{
	// << 왼쪽 시프트 연산자 ( 10 * 2의 n승 )
	// >> 오른쪽 시프트 연산자  (20 / 2의 n승)
	// 10 << 1 (20)00001010
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1; // 10 * 2의 2승
	int shift_right = num2 >> 2; // 10 / 2의 2승
	printf("%d << 1 %d \n", num1, shift_left);
	printf("%d >> 2 %d \n", num2, shift_right);

	return 0;
}