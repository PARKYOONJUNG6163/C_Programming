#include <stdio.h>

void swap(int *a, int *b) {
	int temp=*a;
	*a = *b;
	*b = temp;
}

int main() {
	int m = 100;
	int n = 200;
	printf("���� �� : m = %d, n = %d\n", m, n);
	swap(&m, &n);
	printf("��ȯ �� : m = %d, n = %d\n", m, n);
}