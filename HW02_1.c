#include <stdio.h>
#define PI 3.14

int main() {
	float r;
	printf("원의 반지름을 입력하세요 :");
	scanf("%f", &r);
	printf("원의 면적은 %f입니다.\n", PI * r * r);
}