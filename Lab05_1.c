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
	
	printf("���� �迭�� ��:\n");
	printary(data, aryLength);
	printf("\n");

	incrementary(data, 3, aryLength);

	printf("�迭 ���ҿ� ���� 3�� ���� ���:\n");
	printary(data, aryLength);
	printf("\n");
}