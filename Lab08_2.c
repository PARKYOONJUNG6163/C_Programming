#include <stdio.h>
#include <math.h>
struct point {
	double x;
	double y;
};

int main() {
	struct point p1;
	struct point p2;

	printf("ù��° ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("�ι�° ��ǥ�� �Է��ϼ��� : ");
	scanf("%lf %lf", &p2.x, &p2.y);
	printf("�� �� ������ �Ÿ� : %lf\n", sqrt(pow((p2.x - p1.x), 2.0) + pow((p2.y - p2.x), 2.0)));
}