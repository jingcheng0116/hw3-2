#include <stdio.h>

void hanoi(int n, char from, char to, char aux);

int main() {
	int n;

	printf("請輸入盤子的數量：");
	scanf("%d", &n);

	hanoi(n, 'A', 'C', 'B');

	return 0;
}

void hanoi(int n, char from, char to, char aux) {
	if (n == 1) {
		printf("將第1個盤子以 %c 移動到 %c\n", from, to);
	}
	else {
		hanoi(n - 1, from, aux, to);
		printf("將第%d個盤子以 %c 移動到 %c\n", n, from, to);
		hanoi(n - 1, aux, to, from);
	}
}
