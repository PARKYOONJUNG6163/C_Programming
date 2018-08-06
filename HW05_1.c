#include <stdio.h>

float GetMid(float num1, float num2, float num3) {
	if (num1 < num2) {
		if (num1 < num3) {
			if (num2 < num3) {
				return num2;
			}
			else {
				return num3;
			}
		}
		else {
			return num1;
		}
	}
	else {
		if (num1 < num3) {
			return num1;
		}
		else {
			if (num2 < num3) {
				return num3;
			}
			else {
				return num2;
			}
		}
	}
}

int main() {
	float num1, num2, num3;
	printf("3개의 실수를 입력하세요 : ");
	scanf("%f %f %f", &num1, &num2, &num3);
	printf("중간 값은 %f입니다.\n", GetMid(num1, num2, num3));

}