#include <stdio.h>
int main(void)
{
	/*
	if(���ǽ�){
		������ ������ ��� ������ �ڵ带 �ۼ�;
	}
	else {
		������ ���� false��� �� ���� �����
	} 
	if���� �Ұ�ȣ(����)���� true, false �� �����µ� true�� ��쿡�� {�߰�ȣ} �ڵ带 �����Ѵ�.

	if(���ǽ�)
		������ �ڵ尡 �����̶�� {�߰�ȣ} ���� ����
	*/

	int ifNumber = 10;
	if (ifNumber < 500) {
		printf("%d �� 500���� �۴�? �� ���� ������ ���Դϴ�. \n", ifNumber);
	}

	if (ifNumber == 3) {
		printf("%d�� 3�� ����", ifNumber);
	}

	// ����ڷκ��� �������� �Է¹޾� ���� ���� ���ǹ����� ����� 10000�� �̻��� �� 
	// �Ϸ翡 *****�� �ȴٴ� ����ؿ� ���� �����Դϴ�!

	int walkCount;
	printf("����� �Ϸ翡 �󸶳� �ȳ���?");
	scanf_s("%d", &walkCount);

	if (walkCount >=10000) {
		printf("%d�� �ȴٴ� ����ؿ�~~~~", walkCount);
	}

	char alpha = 'A';
	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�.");
	}
	else {
		printf("alpha�� B�� �ٸ��ϴ�. ");
	}

	int likeNumber;
	printf("����� �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &likeNumber);
	if (likeNumber >= 10) {
		printf("����� �����ϴ� ���ڴ� 10 �̻��̱���~ ");
	}
	else {
		printf("����� �����ϴ� ���ڴ� 10 �̸��̱���~");
	}
	return 0;
}