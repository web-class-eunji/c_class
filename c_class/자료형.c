#include <stdio.h>
int main(void)
{
	// 10  10.0
	unsigned int max_number = 2200000000;
	printf("%u \n", max_number);

	int num1 = 1;
	printf("%d\n", sizeof(num1));
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14f)); //double
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(short));

	return 0;
}