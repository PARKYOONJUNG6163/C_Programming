#include <stdio.h>
#include <ctype.h> 

int main() {
	int bool = 1;
	int num = 0;
	char c[5];
	int i;
	int length = sizeof(c) / sizeof(c[0]);
	while (num < 5) {
		printf("%d ��° ���ڸ� �Է��ϼ��� : ", num + 1);
		c[num] = getchar();
		getchar();
		num++;
	}

	for (i = 0; i < length; i++) {
		switch (i) {
		case 0:
			if (isspace(c[i]) == 0 && (isdigit(c[i]) != 0 || (isalpha(c[i]) == 0 && c[i] != '_'))) {
				printf("%d ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n", i + 1);
				bool = 0;
			} // 1 ��°�� ��������, ���ĺ��̳� _���� �˻�
			break;
		case 1: case 2: case 3:
			if (isspace(c[i]) != 0 || (isalpha(c[i]) == 0 && c[i] != '_')) {
				printf("%d ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n",i+1);
				bool = 0;
			} // 2,3,4 ��°�� ��������, ���ĺ��̳� _���� �˻�
			break;
		case 4:
			if (isspace(c[i]) == 0 && isalpha(c[i]) == 0 && c[i] != '_') {
				printf("%d ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n", i + 1);
				bool = 0;
			} // 5 ��° ���ĺ��̳� _���� �˻�
			break;
		}
	}
	if (bool == 1) {
		printf("%c%c%c%c%c�� ��Ģ�� ������ �������Դϴ�.\n", c[0], c[1], c[2], c[3], c[4]);
	}
}