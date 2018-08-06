#include <stdio.h>

void incrementary(int data[], int n, int SIZE) {
	int i;
	for (i = 0; i < SIZE; i++) {
		data[i] = data[i] + 3;
	}
}

void printary(int data[], int SIZE) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d ", data[i]);
	}
}

int main() {
	int data[] = { 4,7,2,3,5 };
	int aryLength = sizeof(data) / sizeof(data[0]);
	
	printf("원래 배열의 값:\n");
	printary(data, aryLength);
	printf("\n");

	incrementary(data, 3, aryLength);

	printf("배열 원소에 각각 3을 더한 결과:\n");
	printary(data, aryLength);
	printf("\n");
}