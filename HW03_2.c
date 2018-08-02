#include <stdio.h>
#include <ctype.h> 

int main() {
	int bool=1;
	char c1, c2, c3, c4, c5;
	printf("첫 번째 글자를 입력하세요 : ");
	c1 = getchar();
	getchar();
	printf("두 번째 글자를 입력하세요 : ");
	c2 = getchar();
	getchar();
	printf("세 번째 글자를 입력하세요 : ");
	c3 = getchar();
	getchar();
	printf("네 번째 글자를 입력하세요 : ");
	c4 = getchar();
	getchar();
	printf("다섯 번째 글자를 입력하세요 : ");
	c5 = getchar();

	if (isspace(c1) == 0 && (isdigit(c1) != 0 || (isalpha(c1) == 0 && c1 != '_'))) {
		printf("첫 번째 글자가 규칙에 적합하지않습니다\n");
		bool = 0;
	} // 1 번째가 숫자인지, 알파벳이나 _인지 검사

	if (isspace(c2) != 0 || (isalpha(c2) == 0 && c2 != '_')) {
		printf("두 번째 글자가 규칙에 적합하지않습니다\n");
		bool = 0;
	} // 2 번째가 공백인지, 알파벳이나 _인지 검사
	if (isspace(c3) != 0 || (isalpha(c3) == 0 && c3 != '_')) {
		printf("세 번째 글자가 규칙에 적합하지않습니다\n");
		bool = 0;
	} // 3 번째가 공백인지, 알파벳이나 _인지 검사
	if (isspace(c4) != 0 || (isalpha(c4) == 0 && c4 != '_')) {
		printf("네 번째 글자가 규칙에 적합하지않습니다\n");
		bool = 0;
	} // 4 번째가 공백인지, 알파벳이나 _인지 검사

	if (isspace(c5) == 0 && isalpha(c5) == 0 && c5 != '_') {
		printf("다섯 번째 글자가 규칙에 적합하지않습니다\n");
		bool = 0;
	} // 5 번째 알파벳이나 _인지 검사

	if (bool == 1) {
		printf("%c%c%c%c%c는 규칙에 적합한 변수명입니다.\n",c1,c2,c3,c4,c5);
	}
}