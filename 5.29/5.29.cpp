#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
	int num1, num2;

	printf("請輸入兩個整數：\n");
	scanf("%d %d", &num1, &num2);

	int result = lcm(num1, num2);

	printf("最小公倍數是：%d\n", result);

	return 0;
}

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
