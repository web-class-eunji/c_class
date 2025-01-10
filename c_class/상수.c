#include <stdio.h>
#define MYAGE = 10 //가장 먼저 처리
int main(void)
{
	//변수 : 변할 수 있는 값
	int num = 2;
	num = 3;

	//상수 : 변하지 않는 값
	// 리터럴 상수 : 정수 ( int) L, 실수(double) f
	//심볼릭 상수 : const
	// 매크로상수 : 심볼릭 상수의 일종, 세미콜론 X

	//const int num3 = 3;
	const int NUM3 = 3;
	//const int num3;
	//num3 = 3;

	return 0;
}