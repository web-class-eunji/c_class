#include <stdio.h>
int main(void)
{
	/*
	if(조건문) {
		조건을 만족할 경우 실행
	}
	else if (조건2) {
		조건2를 만족할 경우 실행
	}
	else if (조건3) {
		조건2를 만족할 경우 실행
	}
	else if (조건4) {
		조건2를 만족할 경우 실행
	}
	else {
		모든 조건을 만족하지 않을 경우
	}
	*/

	int num_a;
	printf("숫자 입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("고양이 \n");
	}
	else if (num_a == 1) {
		printf("강아지 \n");
	}
	else { // 4보다 작고 1보다 크다면
		printf("햄토리 \n");
	}

	//학점이 90점 이상이라면 A학점, 참 잘했어요!  출력
	// 입력받은 학점 ** 은 80 이상이라면 B학점
	// 입력받은 학점 ** 은 70 이상이라면 C학점
	// 입력받은 학점 ** 은 60 이상이라면 D학점
	// 입력받은 값이 범위 내에 없다면 재시험 출력

	int score;
	printf("학점 입력 : ");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("%d 는 A 학점 참 잘했어요\n",score);
	}
	else if (score >= 80) {
		printf("%d 는 B 학점\n", score);
	}
	else if (score >= 70) {
		printf("%d 는 C 학점\n", score);
	}
	else if (score >= 60) {
		printf("%d 는 D 학점\n", score);
	}
	else {
		printf("재시험 \n");
	}

	//복합조건 버스비
	// 0~ 7세 유아는 800원
	//8~19 학생 1,200원
	// 20 ~ 34세 청년은 1,600
	// 35~59세 중년은 2,000
	// 60 ~ 150세 노년 버스비는 무료입니다.
	// 무언가 잘못됨을 감지.. 사람이 아닌데.. 
	// || / && / !

	int userAge;
	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &userAge);

	if (userAge >= 0 && userAge <= 7) {
		printf("0~ 7세 유아는 800원");
	}
	else if (userAge >= 8 && userAge <= 19) {
		printf("8~19 학생 1,200원");
	}
	else if (userAge >= 20 && userAge <= 34) {
		printf("20 ~ 34세 청년은 1,600");
	}
	else if (userAge >= 35 && userAge <= 59) {
		printf("35~59세 중년은 2,000");
	}
	else if (userAge >= 60 && userAge <= 150) {
		printf("60 ~ 150세 노년 버스비는 무료입니다.");
	}
	else {
		printf("귀신인감..");
	}

	return 0;
}