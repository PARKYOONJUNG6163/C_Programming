#include <stdio.h>
#include <stdlib.h>

int sum(int data[][3], int a, int b) {
	int i, j;
	int result = 0;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			result = result + data[i][j];
		}
	}
	return result;
}

void printarray(int data[][3], int a, int b) {
	int i, j;
	for (i = 0; i < a; i++) {
		printf("%d����� : ", i + 1);
		for (j = 0; j < b; j++) {
			printf("x[%d][%d] = %d\t", i, j, data[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int i, j;
	int data[4][3];
	int rand();
	srand(time(NULL));

	printf("2���� �迭�� �ڷᰪ�� ������ �����ϴ�.\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			data[i][j] = rand() % (100 + 1);
		}
	}
	printarray(data,4,3);
	printf("2���� �迭 �������� %d �Դϴ�.\n", sum(data,4,3));
}



