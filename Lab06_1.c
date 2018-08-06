#include <stdio.h>

void incrementary(int *ary, int n, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		*(ary + i) = *(ary + i) + n;
	}
}

void printary(int *data, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(data + i));
	}
}

int main() {
	int data[] = { 4, 7, 2, 3, 5 };
	int aryLength = sizeof(data) / sizeof(data[0]);
	printf("���� �迭�� ��: ");
	printary(data, aryLength);
	printf("\n");
	printf("�迭 ���ҿ� ���� 3�� ���� ���: ");
	incrementary(data, 3, aryLength);
	printary(data, aryLength);
	printf("\n");
}