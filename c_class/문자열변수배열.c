#include <stdio.h>
int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("문자열 변수 string_text의 길이는 : %zd \n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("영어 문자열 english_text의 길이는 : %zd \n", sizeof(english_text));

	char long_text[50] = "This is long";
	printf("문자열 변수 long_text의 길이는 : %zd \n", sizeof(long_text));
	//printf("배열 long_text에 초기화된 문자열의 길이 : %zd \n", strlen(long_text));
	printf("%s \n", long_text);

	char name[30] = "My name is 은지";
	printf("%s \n", name);
	name[10] = '\0';
	printf("%s \n", name);
	printf("문자열 변수 name의 길이는 : %zd \n", sizeof(name));


	//char scanfs_string[50];
	//printf("scanfs_string 문자열을 입력하세요 : ");
	//scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string));
	//printf("%s \n", scanfs_string);

	char gets_string[50];
	printf("gets_s로 문자열을 입력하세요 : ");
	gets_s(gets_string, sizeof(gets_string));
	printf("%s \n", gets_string);
	return 0;
}