#include <stdio.h>

void toHex(int num) {
	int reminder = num % 16;
	num = num / 16;
	if(num != 0) toHex(num);
	if (reminder > 9) {
		printf("%c", (char)(reminder + 55));
	}
	else {
		printf("%c", (char)(reminder + 48));
	}
}

int main() {
	int num;
	printf("16진수로 변환할 정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("%d의 16진수 값 : ", num);
	toHex(num);
	printf("\n");
}