#include <stdio.h>

int main(void) {

	int x;
	int y;

	printf("����� ù��° ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &x);

	printf("����� �ι�° ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &y);

	printf(" x + y = %d \n", x + y);
	printf(" x - y = %d \n", x - y);
	printf(" x * y = %d \n", x * y);
	printf(" x / y = %d \n", x / y);

	return 0;
}