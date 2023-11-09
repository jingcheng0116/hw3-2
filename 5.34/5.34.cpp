#include <stdio.h>

int power(int base, int exponent) {
	if (exponent == 0) {
		return 1.0;
	}
	else if (exponent > 0) {
		return base * power(base, exponent - 1);
	}
	else {
		return 1.0 / (base * power(base, -exponent - 1));
	}
}

int main() {
	int base;
	int exponent;

	printf("請輸入基數：");
	scanf("%d", &base);
	printf("請輸入指數：");
	scanf("%d", &exponent);

	int result = power(base, exponent);
	printf("%d 的 %d 次方結果為：%d\n", base, exponent, result);

	return 0;
}
