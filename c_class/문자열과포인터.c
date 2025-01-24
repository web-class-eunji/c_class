#include <stdio.h>
int main(void)
{
	char good[] = "good";
	char* bad = "bad";
	 
	good[0] = 'H';
	//good = "new good";
	printf("%s, %s", good,bad);

	//bad[0] = 's';
	bad = "new bad";
	printf("%s, %s", good, bad);
	return 0;
}