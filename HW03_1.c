#include <stdio.h>

int main() {
	float f;
	
	printf("�Ǽ��� �ϳ� �Է��ϼ��� : ");
	scanf("%f", &f);
	printf("������ : %d\n", (int)f);
	printf("�Ǽ��� : %f\n", f - (int)f);
}