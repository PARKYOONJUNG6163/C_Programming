#include <stdio.h>
#include <math.h>

struct com{
	double a;
	double b;
};

void comAdd(double a,double b,double c,double d) {
	printf("덧셈 결과 : %lf + %lfi\n", a + c, b + d);
}

void comMul(double a, double b, double c, double d) {
	printf("곱셈 결과 : %lf + %lfi\n", a*c-b*d, a*d+b*c);
}

void comSub(double a, double b, double c, double d) {
	printf("뺄셈 결과 : %lf + %lfi\n", a - c, b - d);
}

void comAb(double a, double b, double c, double d) {
	printf("첫번째 절댓값 결과 : %lf\n", sqrt(a*a+b*b));
	printf("두번째 절댓값 결과 : %lf\n", sqrt(c*c + d * d));
}

int main() {
	struct com c1;
	struct com c2;

	printf("첫번째 복소수를 입력하세요 : ");
	scanf("%lf %lf", &c1.a, &c1.b);
	printf("두번째 복소수를 입력하세요 : ");
	scanf("%lf %lf", &c2.a, &c2.b);
	printf("\n***********계산 결과**********\n");
	comAdd(c1.a, c1.b, c2.a, c2.b);
	comSub(c1.a, c1.b, c2.a, c2.b);
	comMul(c1.a, c1.b, c2.a, c2.b);
	comAb(c1.a, c1.b, c2.a, c2.b);
}