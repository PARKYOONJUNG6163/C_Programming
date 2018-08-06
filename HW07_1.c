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
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", src);
	printf("Ű ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("\n");
	printf("��ȣȭ�� ���ڿ��� [%s]�Դϴ�.\n",encode(src,num));
	printf("��ȣȭ�� ���ڿ��� [%s]�Դϴ�.\n", decode(src, num));
}