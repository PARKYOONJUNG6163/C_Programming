#include <stdio.h>

int main(void) {
	float f;
	float c;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%f", &c);
	f = 5.0 / 9.0 * (c - 32.0);
	printf("섭씨 온도는 %.4f도 입니다.\n", f);	
}