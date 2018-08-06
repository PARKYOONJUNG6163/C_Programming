#include <stdio.h>
#include <stdlib.h>

int main() {
	int rand();
	int Ma1[3][2];
	int Ma2[2][3];
	int ResultMa[3][3];
	srand(time(NULL));

	printf("3 x 2 Matrix : \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			Ma1[i][j] = (rand() % (10 - (-10) + 1)) + (-10);
			printf("%d\t", Ma1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("2 x 3 Matrix : \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			Ma2[i][j] = (rand() % (10 - (-10) + 1)) + (-10);
			printf("%d\t", Ma2[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("Output Matrix : \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", Ma1[i][0] * Ma2[0][j] + Ma1[i][1] * Ma2[1][j]);
		}
		printf("\n");
	}

}