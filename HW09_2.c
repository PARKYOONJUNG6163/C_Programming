#include <stdio.h>
#include <string.h>

int main() {
	FILE *f;
	char str[100];
	char token[100];
	int count = 0;
	int diff;
	if ((f = fopen("input.txt", "r")) == NULL) {
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	printf("�˻� �� ��ū�� �Է��ϼ��� : ");
	scanf("%s", token);

	fgets(str, 100, f);
	char *ptr = strtok(str, " "); // ���� �߶� 
	while (ptr != NULL) { // NULL�� �ƴ� ������
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
		printf("�� ��ū�� ���Ͽ� �������� �ʽ��ϴ�.\n");
	}else {
		printf("�� ��ū�� ���Ͽ� %d�� �����մϴ�.\n",count);
	}
}