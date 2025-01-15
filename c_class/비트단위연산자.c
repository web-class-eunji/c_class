#include <stdio.h>
int main(void)
{
	 /*
	 & (and) : �����ϴ� �� ��Ʈ�� ���� ��� 1�̸� 1�� ��ȯ �ƴϸ� 0�� ��ȯ
	 | (or) : �����ϴ� ��Ʈ�� �� �߿� 1�� �ϳ��� ������ 1�� ��ȯ
	 ^(xor) : �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	 ~(not) : ��Ʈ�� ���� 1�̸� 0����, 0�̶�� 1�� ��Ʈ ���� ������Ŵ
	 */
	int bit_five = 5; //   00000101 - 11111010
	int bit_three = 3; //00000011
	printf("bit_five & bit_three = %d\n", bit_five & bit_three);
	printf("bit_five | bit_three = %d\n", bit_five | bit_three);
	printf("bit_five ^ bit_three = %d\n", bit_five ^ bit_three);
	printf("~%d = %d\n", bit_five, ~bit_five);


	return 0;
}