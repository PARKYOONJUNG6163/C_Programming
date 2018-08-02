#include <stdio.h>

int main() {
	float f;
	
	printf("실수를 하나 입력하세요 : ");
	scanf("%f", &f);
	printf("정수부 : %d\n", (int)f);
	printf("실수부 : %f\n", f - (int)f);
}