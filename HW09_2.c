#include <stdio.h>
#include <string.h>

int main() {
	FILE *f;
	char str[100];
	char token[100];
	int count = 0;
	int diff;
	if ((f = fopen("input.txt", "r")) == NULL) {
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	printf("검색 할 토큰을 입력하세요 : ");
	scanf("%s", token);

	fgets(str, 100, f);
	char *ptr = strtok(str, " "); // 문자 잘라서 
	while (ptr != NULL) { // NULL이 아닐 때까지
		diff = 1;
		for (int i = 0; *(ptr + i) != '\0'; i++) {
			if (tolower(*(ptr + i)) != tolower(*(token + i))) {
				diff = 0;
				break;
			} 
		}
		if (diff == 1) count++;
		ptr = strtok(NULL, " ");
	}

	if (count == 0) {
		printf("이 토큰은 파일에 존재하지 않습니다.\n");
	}else {
		printf("이 토큰은 파일에 %d개 존재합니다.\n",count);
	}
}