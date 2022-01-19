#include <stdio.h>

int main(void) {

	int x;
	int y;

	printf("계산할 첫번째 숫자를 입력하세용: ");
	scanf_s("%d", &x);

	printf("계산할 두번째 숫자를 입력하세용: ");
	scanf_s("%d", &y);

	printf(" x + y = %d \n", x + y);
	printf(" x - y = %d \n", x - y);
	printf(" x * y = %d \n", x * y);
	printf(" x / y = %d \n", x / y);

	return 0;
}