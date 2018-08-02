#include <stdio.h>

int main() {
	char c[100];
	int count[26];
	int i;
	int x = 0;

	for (i = 0; i < 100; i++) {
		c[i] = '\0';
	}

	for (i = 0; i < 26; i++) {
		count[i] = 0;
	}

	printf("문자열을 입력하세요 : ");
	scanf("%s", &c);

		while (c[x] != '\0') {
			if (c[x] < 97 || c[x] > 122) {
				printf("소문자만 입력해주세요.\n");
				return 0;
			}
			x++;
		}


	for (i = 0; i < 26; i++) {
		count[c[i] - 97]++;
	}

	printf("각 알파벳의 개수 : \n");
	for (i = 0; i < 26; i++) {
		printf("%c ", (char)(i + 97));
	}
	printf("\n");
	for (i = 0; i < 26; i++) {
		printf("%d ", count[i]);
	}
	printf("\n");
}