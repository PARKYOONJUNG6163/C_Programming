#include <stdio.h>

int main() {
	FILE *f;
	char str[100];
	if ((f = fopen("input.txt", "r")) == NULL) // 복사할 파일 열기
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	fgets(str, 100, f);
	//char *ptr = strtok(str, " ");
	*str = *str - 32; // 처음 글자
	for (int i = 0; *(str+i) != '\0'; i++) { // 나머지 글자
		if (*(str+i) == ' ') {
			*(str + i+1) = *(str + i+1) - 32;
		}
	}
	fclose(f);

	f = fopen("output.txt", "w"); // 저장할 파일 열기
	fprintf(f, "%s", str);
	fclose(f);
}