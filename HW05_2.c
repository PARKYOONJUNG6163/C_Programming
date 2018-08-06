#include <stdio.h>

void fiboLoop(int num) {
	int *fibo;
	fibo = (int*)malloc(sizeof(int)*num);

	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < num; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	}

	for (int i = 0; i < num; i++) {
		printf("%d ", fibo[i]);
	}
}

int fiboRecu(int num) {
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else {
		return fiboRecu(num - 1) + fiboRecu(num - 2);
	}
}

int main() {
	int num;
	
	int count = 0;
	printf("����� �Ǻ���ġ ���� ������ �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("Loop�� �̿� : ");
	fiboLoop(num);
	printf("\n");
	printf("Recursive �Լ� �̿� : ");
	while (count < num) {
		printf("%d ",fiboRecu(count));
		count++;
	}
	printf("\n");
}

