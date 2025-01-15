#include <stdio.h>
int main(void)
{
	 /*
	 & (and) : 대응하는 각 비트의 값이 모두 1이면 1을 반환 아니면 0을 반환
	 | (or) : 대응하는 비트의 값 중에 1이 하나라도 있으면 1을 반환
	 ^(xor) : 대응하는 비트의 값이 다르면 1을 반환
	 ~(not) : 비트의 값이 1이면 0으로, 0이라면 1로 비트 값을 반전시킴
	 */
	int bit_five = 5; //   00000101 - 11111010
	int bit_three = 3; //00000011
	printf("bit_five & bit_three = %d\n", bit_five & bit_three);
	printf("bit_five | bit_three = %d\n", bit_five | bit_three);
	printf("bit_five ^ bit_three = %d\n", bit_five ^ bit_three);
	printf("~%d = %d\n", bit_five, ~bit_five);


	return 0;
}