#include <stdio.h>

int main() {
	int boo = 1;
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

	if (c1 != 32 && ((c1 >47 && c1<58)  || (!(c1 >64 && c1<91) && !(c1 >96 && c1<123) && c1 != '_'))) {
		printf("첫 번째 글자가 규칙에 적합하지않습니다\n");
		boo = 0;
	} // 1 번째가 숫자인지, 알파벳이나 _인지 검사

	if (c2 == 32 || (!(c2 >64 && c2<91) && !(c2 >96 && c2<123) && c2 != '_')) {
		printf("두 번째 글자가 규칙에 적합하지않습니다\n");
		boo = 0;
	} // 2 번째가 공백인지, 알파벳이나 _인지 검사
	if (c3 == 32 || (!(c3 >64 && c3<91) && !(c3 >96 && c3<123) && c3 != '_')) {
		printf("세 번째 글자가 규칙에 적합하지않습니다\n");
		boo = 0;
	} // 3 번째가 공백인지, 알파벳이나 _인지 검사
	if (c4 == 32 || (!(c4 >64 && c4<91) && !(c4 >96 && c4<123) && c4 != '_')) {
		printf("네 번째 글자가 규칙에 적합하지않습니다\n");
		boo = 0;
	} // 4 번째가 공백인지, 알파벳이나 _인지 검사

	if (c5 != 32 && (!(c5 >64 && c5<91) && !(c5 >96 && c5<123) && c5 != '_')) {
		printf("다섯 번째 글자가 규칙에 적합하지않습니다\n");
		boo = 0;
	} // 5 번째 알파벳이나 _인지 검사

	if (boo == 1) {
		printf("%c%c%c%c%c는 규칙에 적합한 변수명입니다.\n", c1, c2, c3, c4, c5);
	}
}