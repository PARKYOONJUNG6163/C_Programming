#include <stdio.h>
#include <math.h>

struct com{
	double a;
	double b;
};

void comAdd(double a,double b,double c,double d) {
	printf("���� ��� : %lf + %lfi\n", a + c, b + d);
}

void comMul(double a, double b, double c, double d) {
	printf("���� ��� : %lf + %lfi\n", a*c-b*d, a*d+b*c);
}

void comSub(double a, double b, double c, double d) {
	printf("���� ��� : %lf + %lfi\n", a - c, b - d);
}

void comAb(double a, double b, double c, double d) {
	printf("ù��° ���� ��� : %lf\n", sqrt(a*a+b*b));
	printf("�ι�° ���� ��� : %lf\n", sqrt(c*c + d * d));
}

int main() {
	struct com c1;
	struct com c2;

	printf("ù��° ���Ҽ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &c1.a, &c1.b);
	printf("�ι�° ���Ҽ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &c2.a, &c2.b);
	printf("\n***********��� ���**********\n");
	comAdd(c1.a, c1.b, c2.a, c2.b);
	comSub(c1.a, c1.b, c2.a, c2.b);
	comMul(c1.a, c1.b, c2.a, c2.b);
	comAb(c1.a, c1.b, c2.a, c2.b);
}