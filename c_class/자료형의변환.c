#include <stdio.h>
int main(void)
{

	// 자동 형변환
	double change_number = 10;
	printf("%f\n", change_number);

	int change_number2 = 5.11223;
	printf("%d\n", change_number2);


	printf("%d\n", (int)1.1234);
	printf("%d\n", (short)1.1234); 
	printf("%f\n", (double)22);
	printf("%f\n",(float)22);


	printf("%zd", sizeof(int));
	printf("%zd", sizeof(char));
	printf("%zd", sizeof(short));
	printf("%zd", sizeof(50));
	printf("%zd", sizeof(float));
	printf("%zd\n", sizeof(3.14));


	float f = 3.14f;
	printf("%f\n", f);
	return 0;
}