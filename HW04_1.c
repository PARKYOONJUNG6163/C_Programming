#include <stdio.h>
#include <ctype.h> 

int main() {
	int bool = 1;
	int num = 0;
	char c[5];
	int i;
	int length = sizeof(c) / sizeof(c[0]);
	while (num < 5) {
		printf("%d 번째 글자를 입력하세요 : ", num + 1);
		c[num] = getchar();
		getchar();
		num++;
	}

	for (i = 0; i < length; i++) {
		switch (i) {
		case 0:
			if (isspace(c[i]) == 0 && (isdigit(c[i]) != 0 || (isalpha(c[i]) == 0 && c[i] != '_'))) {
				printf("%d 번째 글자가 규칙에 적합하지않습니다\n", i + 1);
				bool = 0;
			} // 1 번째가 숫자인지, 알파벳이나 _인지 검사
			break;
		case 1: case 2: case 3:
			if (isspace(c[i]) != 0 || (isalpha(c[i]) == 0 && c[i] != '_')) {
				printf("%d 번째 글자가 규칙에 적합하지않습니다\n",i+1);
				bool = 0;
			} // 2,3,4 번째가 공백인지, 알파벳이나 _인지 검사
			break;
		case 4:
			if (isspace(c[i]) == 0 && isalpha(c[i]) == 0 && c[i] != '_') {
				printf("%d 번째 글자가 규칙에 적합하지않습니다\n", i + 1);
				bool = 0;
			} // 5 번째 알파벳이나 _인지 검사
			break;
		}
	}
	if (bool == 1) {
		printf("%c%c%c%c%c는 규칙에 적합한 변수명입니다.\n", c[0], c[1], c[2], c[3], c[4]);
	}
}