#include <stdio.h>

int main() {
	int i,j;
	int prime; // 소수인지 아닌지
	printf("1에서 100사이의 소수 : \n");
	for (i = 2; i < 100; i++) {
		prime = 1;
		for (j = 2; j < i; j++) {
 			if (i%j == 0) {
				prime = 0;
				break;
			} // 나눠지면 소수아니므로 0으로 바꿔주고 바로 for문 탈출
		}

		if (prime == 1) {
			printf("%d\t", i);
		}
	}
	printf("\n");
}