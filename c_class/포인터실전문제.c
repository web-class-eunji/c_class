#include <stdio.h>
int main()
{
	int a = 10, b; // a = 10 , b = ?
	int* c = &b; // c라는 포인터 변수에 b의 주소를 가리키고 있을것

	b = a--; //b = 10
	b += 20; // b = b+ 20 ( 30 )
	printf("%d", *c); //30



	int n = 4;
	int* pt = NULL;
	pt = &n;
	printf("%d", &n + *pt - *&pt + n);
	// n의 주소값100 + 4 - 100 + 4 = 104 4  8
	return 0;
}