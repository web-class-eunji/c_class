#include <stdio.h>
int main(void)
{
	// 주소 가져오기 : 변수의 주소를 얻으려면 &를 사용해서 가져올 것
	// 주소 따라가기 : 포인터를 통해 주소 안의 데이터에 접근하려면 *를 통해 접근한다.

	int a = 10;
	double d = 3.14;

	double* ptr = &d;

	int* p = &a;
	printf("%p \n", &a);

	printf("%p \n", p);
	printf("%d \n", *p);

	printf("%p \n", ptr);
	printf("%.2f \n", *ptr);

	int pointerNum = 30;
	int* pnp;
	pnp = &pointerNum;

	// * 정리
	// 1. 곱하기 : 별표연산자를 기준으로 피연산자들이 숫자값이나 변수로 이루어져 있다면 곱하기
	// 2. 포인터 변수 : 좌측에 있는 피연산자가 자료형이라면 포인터변수로 사용
	// 3. 역참조 : 별표연산자가 단항으로 붙어있다면 역참조

	// 포인터 선언 시 주의사항
	// 1. int* p
	// 2. int * p
	// 3. int *p
	// 4. int*p

	/*
	int a = 5;
	
	int* p;
	p = &a;
	*/

	return 0;
}