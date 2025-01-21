#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	//printf("");
	// rand() , srand(), time()
	int rad;
	srand((unsigned)time(NULL));
	rad = rand() % 100 + 1; // RAND_MAX : 0 ~ 32767
	printf("%d", rad);
	return 0;
}