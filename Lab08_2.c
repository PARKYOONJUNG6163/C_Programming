#include <stdio.h>
#include <math.h>
struct point {
	double x;
	double y;
};

int main() {
	struct point p1;
	struct point p2;

	printf("첫번째 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p1.x, &p1.y);
	printf("두번째 좌표를 입력하세요 : ");
	scanf("%lf %lf", &p2.x, &p2.y);
	printf("두 점 사이의 거리 : %lf\n", sqrt(pow((p2.x - p1.x), 2.0) + pow((p2.y - p2.x), 2.0)));
}