#include <stdio.h>

int main() {
	int i,j;
	int prime; // �Ҽ����� �ƴ���
	printf("1���� 100������ �Ҽ� : \n");
	for (i = 2; i < 100; i++) {
		prime = 1;
		for (j = 2; j < i; j++) {
 			if (i%j == 0) {
				prime = 0;
				break;
			} // �������� �Ҽ��ƴϹǷ� 0���� �ٲ��ְ� �ٷ� for�� Ż��
		}

		if (prime == 1) {
			printf("%d\t", i);
		}
	}
	printf("\n");
}