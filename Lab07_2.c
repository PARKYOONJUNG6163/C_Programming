#include <stdio.h>

int mystrlen(const char *p) {
	int count = 0;
	for (int i = 0; *(p + i) != NULL; i++) {
			count++;
	}
	return count;
}

int main() {
	char p[100];
	gets(p);
	printf("���ڿ��� ���̴� [%d]�Դϴ�.\n\n", mystrlen(p));
}