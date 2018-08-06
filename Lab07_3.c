#include <stdio.h>

void *mystrcat(char *dst, char *src) {
	while (*dst) {
		dst++;
	}
	while (*src) {
		*dst++ = *src++;
	}
}

int main() {
	char dst[50] = "C Programming ";
	char src[50] = "Language";

	mystrcat(dst, src);
	printf("%s\n", dst);
}