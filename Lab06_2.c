#include <stdio.h>

int main() {
	int i = 0x324F3A24;
	char *p = &i;

	printf("i = 0x");
	for (int j = sizeof(i)-1; j >= 0; j--) {
		printf("%X", *(p + j));
	}
	printf("\n");
}