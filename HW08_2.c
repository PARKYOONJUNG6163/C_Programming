#include <stdio.h>

struct polynomial {
	int coeff;
	int exp;
};

int main() {
	struct polynomial poly[6];
	double num;
	double total = 0.0;
	double mul = 1.0;
	printf("차수와 지수를 순서대로 입력 : \n");
	for (int i = 0; i < 6; i++) {
		scanf("%d %d", &poly[i].coeff, &poly[i].exp);
	}

	printf("다항식 : ");
	for (int i = 0; i < 5; i++) {
		if (poly[i].coeff == 1) {
			printf("x^%d + ", poly[i].exp);
		}
		else if (poly[i].coeff == 0) {
			printf("");
		}
		else {
			printf("%dx^%d + ", poly[i].coeff, poly[i].exp);
		}
	}
	printf("%d\n", poly[5].coeff);

	printf("x값을 입력하세요 : ");
	scanf("%lf", &num);

	for (int i = 0; i < 6; i++) {
		mul = 1.0;
		for (int j = 0; j < poly[i].exp; j++) {
			mul *= num;
		}
		total += poly[i].coeff * mul;
	}
	printf("다항식 계산 결과 : %lf\n",total);
}