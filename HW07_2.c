#include <stdio.h>

int main() {
	char password[100];
	char *p = password;
	int correct = 1;
	int tf = 0;
	int num = 0;
	int lower = 0;
	int upper = 0;
	int length = 0;
	int cont = 0;
	printf("�н����带 �Է��ϼ��� : ");
	scanf("%s", password);
	printf("\n");

	char temp = '\0';
	while (*p) {
		if (*p == '@' || *p == '#' || *p == '%') tf = 1;
		if (96 < (int)*p && (int)*p < 123) {
			if ((int)temp - (int)*p == -1 || (int)temp - (int)*p == 1) cont = 1;
			lower = 1;
		}
		if (64 < (int)*p && (int)*p < 91) {
			if ((int)temp - (int)*p == -1 || (int)temp - (int)*p == 1) cont = 1;
			upper = 1;
		}
		if (47 <= (int)*p && (int)*p <= 58) {
			if ((int)temp - (int)*p == -1 || (int)temp - (int)*p == 1) cont = 1;
			num = 1;
		}
		temp = *p;
		length++;
		*p++;
	}

	if (length < 10) {
		correct = 0;
		printf("ù ��°\n");
	}
	if (tf == 0) {
		correct = 0;
		printf("�� ��°\n");
	}
	if (num != 1 || lower != 1 || upper != 1) {
		correct = 0;
		printf("�� ��°\n");
	}
	if (cont == 1) {
		correct = 0;
		printf("�� ��°\n");
	}

	printf("\n");
	// ���� �ǰ�
	if (correct == 1) {
		printf("��Ģ�� ������ �н����� �Դϴ�.\n");
	}
	else {
		printf("��Ģ�� �������� ���� �н����� �Դϴ�.\n");
	}
	printf("\n");
}