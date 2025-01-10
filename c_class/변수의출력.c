#include <stdio.h>
int main(void)
{
	int number1 = 1; //number1 이라는 것을 통해 1에 접근이 가능하다;
	int number2 = 2;
	printf("%d\n",number1);
	
	printf("나이 : %d \n번호: %d \n", number2,number2);

	// 2 * 3 = 6 
	// 조건 : 변수를 3개 선언
	// 힌트 : 곱하기는 *를 사용한다.
	// int num6 = 6 X

	int num1, num2, result;
	num1 = 2;
	num2 = 3;
	result = num1 * num2;
	printf("%d * %d = %d",num1,num2,result);


	return 0;
}