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
	printf("출력할 피보나치 수의 개수를 입력하세요 : ");
	scanf("%d", &num);
	printf("Loop문 이용 : ");
	fiboLoop(num);
	printf("\n");
	printf("Recursive 함수 이용 : ");
	while (count < num) {
		printf("%d ",fiboRecu(count));
		count++;
	}
	printf("\n");
}

