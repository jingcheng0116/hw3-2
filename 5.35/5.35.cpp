#include <stdio.h>

int fibonacci(int n) {
	if (n <= 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;
	printf("請輸入婓波那契數列的項數：");
	scanf("%d", &n);

	if (n <= 0) {
		printf("項數必須是正整數。\n");
	}
	else {
		printf("婓波那契數列的前 %d 個元素為：\n", n);
		for (int i = 0; i < n; i++) {
			printf("%d ", fibonacci(i));
		}
		printf("\n");
	}

	return 0;
}
