#include <stdio.h>
int main(void)
{
	// << ���� ����Ʈ ������ ( 10 * 2�� n�� )
	// >> ������ ����Ʈ ������  (20 / 2�� n��)
	// 10 << 1 (20)00001010
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1; // 10 * 2�� 2��
	int shift_right = num2 >> 2; // 10 / 2�� 2��
	printf("%d << 1 %d \n", num1, shift_left);
	printf("%d >> 2 %d \n", num2, shift_right);

	return 0;
}