#include <stdio.h>
int main(void)
{
	// ���� ( ����--; / --����;)
	// ���� ( ����++; / ++����;)
	
	// ++������ ���� ++ �� ������
	// int a = b++;

	int put_a = 10, put_b = 20;
	printf("A : %d \n", put_a); 
	printf("A : %d \n", ++put_a);
	printf("A : %d \n", put_a);
	printf("\n");
	printf("b : %d \n", put_b);
	printf("b : %d \n", put_b++);
	printf("b : %d \n", put_b);
	return 0;
}