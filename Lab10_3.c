#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("N°ª : ");
	scanf("%d", &n);
	int **arr = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int)*n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % (10 + 1);
		//	*(*(arr + j) + i) = rand() % (10 + 1);
		}
	}

	for (int i = 0; i < n; i++) {
		free(arr[i]);
	}
	free(arr);
}