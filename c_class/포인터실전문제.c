#include <stdio.h>
int main()
{
	int a = 10, b; // a = 10 , b = ?
	int* c = &b; // c��� ������ ������ b�� �ּҸ� ����Ű�� ������

	b = a--; //b = 10
	b += 20; // b = b+ 20 ( 30 )
	printf("%d", *c); //30



	int n = 4;
	int* pt = NULL;
	pt = &n;
	printf("%d", &n + *pt - *&pt + n);
	// n�� �ּҰ�100 + 4 - 100 + 4 = 104 4  8
	return 0;
}