#include <stdio.h>
int main(void)
{
	int x = 10, y = 20;
	int* const PTR = &x;
	printf("%d \n", *PTR);
	*PTR = 30;
	PTR = &y;
	return 0;
}