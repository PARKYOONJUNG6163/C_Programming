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
	printf("������ ������ ������� �Է� : \n");
	for (int i = 0; i < 6; i++) {
		scanf("%d %d", &poly[i].coeff, &poly[i].exp);
	}

	printf("���׽� : ");
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

	printf("x���� �Է��ϼ��� : ");
	scanf("%lf", &num);

	for (int i = 0; i < 6; i++) {
		mul = 1.0;
		for (int j = 0; j < poly[i].exp; j++) {
			mul *= num;
		}
		total += poly[i].coeff * mul;
	}
	printf("���׽� ��� ��� : %lf\n",total);
}