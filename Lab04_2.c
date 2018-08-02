#include <stdio.h>

int main() {
	int i, j;
	int temp;

	for (i = 0; i < 8; i++) {
		temp = i;
		for (j = 7; j >= 0; j--) {
			if (i == j) {
				while (temp >= 0) {
					printf("%d", temp--);
				}
				temp = 1;
				while (temp <= j) {
					printf("%d", temp++);
				}
				break;
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
		
}
