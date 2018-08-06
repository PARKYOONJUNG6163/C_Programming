#include <stdio.h>

char *encode(char* src,int num) {
	int i = 0;

	while (*(src+i)) {
		if (*(src + i) + num > 90) {
			*(src + i) = *(src + i) + num - 26 ;
		}
		else {
			*(src + i) = *(src + i) + num;
		}
		i++;
	}

	return src;
}

char *decode(char* src, int num) {
	int i = 0;

	while (*(src + i)) {
		if (*(src + i) - num < 65) {
			*(src + i) = *(src + i) - num + 26;
		}
		else {
			*(src + i) = *(src + i) - num;
		}
		i++;
	}

	return src;
}

int main() {
	char src[100];
	int num;
	printf("문자열을 입력하세요 : ");
	scanf("%s", src);
	printf("키 값을 입력하세요 : ");
	scanf("%d", &num);
	printf("\n");
	printf("암호화된 문자열은 [%s]입니다.\n",encode(src,num));
	printf("복호화된 문자열은 [%s]입니다.\n", decode(src, num));
}