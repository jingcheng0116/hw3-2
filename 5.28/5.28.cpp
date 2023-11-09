#include <stdio.h>

int main() {
	char input;

	printf("請輸入一個字母：");
	scanf("%c", &input);

	if (input >= 'a' && input <= 'z') {
		char uppercase = input - 'a' + 'A';
		printf("轉換為大寫字母：%c\n", uppercase);
	}
	else if (input >= 'A' && input <= 'Z') {
		char lowercase = input - 'A' + 'a';
		printf("轉換為小寫字母：%c\n", lowercase);
	}
	else {
		printf("輸入無效，請輸入一個字母。\n");
	}

	return 0;
}
