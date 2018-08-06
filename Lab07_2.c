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
	printf("문자열의 길이는 [%d]입니다.\n\n", mystrlen(p));
}