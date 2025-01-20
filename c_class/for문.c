#include <stdio.h>
int main(void)
{
	/*
	for(초기값; 조건식; 증감식){
		조건식이 참이라면 실행시킬 코드;
	}
	*/

	int i;
	for (i = 1; i <= 10; i++) {
		printf("%d 의 제곱 : %d \n", i, i * i);
	}
	return 0;
}