#include <stdio.h>
int main(void)
{
	/*
	for(초기 ; 조건 ; 증감){
		continue;
		실행할 코드
	}

	while(조건) {
		증감식;
		continue;
		실행할 코드;
	}
	*/

	int for_continue;
	for (for_continue = 1;for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) { //짝수라면
			continue;
		}
		printf("%d \n", for_continue);
	}

	int while_continue = 1;
	while (while_continue <= 10) {
		while_continue++;
		if (while_continue % 2 != 0) { //홀수라면
			continue;
		}
		printf("%d \n", while_continue);
	}


	return 0;
}