#include <stdio.h>

int main() {
	FILE *f;
	char str[100];
	if ((f = fopen("input.txt", "r")) == NULL) // ������ ���� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	fgets(str, 100, f);
	//char *ptr = strtok(str, " ");
	*str = *str - 32; // ó�� ����
	for (int i = 0; *(str+i) != '\0'; i++) { // ������ ����
		if (*(str+i) == ' ') {
			*(str + i+1) = *(str + i+1) - 32;
		}
	}
	fclose(f);

	f = fopen("output.txt", "w"); // ������ ���� ����
	fprintf(f, "%s", str);
	fclose(f);
}