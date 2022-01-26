#include <stdio.h>

int main(void) {

	int i = 1;
	int n;

	printf("출력하고 싶은 단을 입력하세요: ");
	scanf_s("%d", &n);

	while (i < 10) {
		printf("%d X %d = %d\n", n, i, n*i);
		i++;
	}

	return 0;
}