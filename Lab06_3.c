#include <stdio.h>

void swap(int *a, int *b) {
	int temp=*a;
	*a = *b;
	*b = temp;
}

int main() {
	int m = 100;
	int n = 200;
	printf("원래 값 : m = %d, n = %d\n", m, n);
	swap(&m, &n);
	printf("교환 후 : m = %d, n = %d\n", m, n);
}