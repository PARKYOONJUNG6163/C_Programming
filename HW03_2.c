#include <stdio.h>
#include <ctype.h> 

int main() {
	int bool=1;
	char c1, c2, c3, c4, c5;
	printf("ù ��° ���ڸ� �Է��ϼ��� : ");
	c1 = getchar();
	getchar();
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	c2 = getchar();
	getchar();
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	c3 = getchar();
	getchar();
	printf("�� ��° ���ڸ� �Է��ϼ��� : ");
	c4 = getchar();
	getchar();
	printf("�ټ� ��° ���ڸ� �Է��ϼ��� : ");
	c5 = getchar();

	if (isspace(c1) == 0 && (isdigit(c1) != 0 || (isalpha(c1) == 0 && c1 != '_'))) {
		printf("ù ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n");
		bool = 0;
	} // 1 ��°�� ��������, ���ĺ��̳� _���� �˻�

	if (isspace(c2) != 0 || (isalpha(c2) == 0 && c2 != '_')) {
		printf("�� ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n");
		bool = 0;
	} // 2 ��°�� ��������, ���ĺ��̳� _���� �˻�
	if (isspace(c3) != 0 || (isalpha(c3) == 0 && c3 != '_')) {
		printf("�� ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n");
		bool = 0;
	} // 3 ��°�� ��������, ���ĺ��̳� _���� �˻�
	if (isspace(c4) != 0 || (isalpha(c4) == 0 && c4 != '_')) {
		printf("�� ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n");
		bool = 0;
	} // 4 ��°�� ��������, ���ĺ��̳� _���� �˻�

	if (isspace(c5) == 0 && isalpha(c5) == 0 && c5 != '_') {
		printf("�ټ� ��° ���ڰ� ��Ģ�� ���������ʽ��ϴ�\n");
		bool = 0;
	} // 5 ��° ���ĺ��̳� _���� �˻�

	if (bool == 1) {
		printf("%c%c%c%c%c�� ��Ģ�� ������ �������Դϴ�.\n",c1,c2,c3,c4,c5);
	}
}