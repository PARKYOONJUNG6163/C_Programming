#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personscore {
	int number;
	char name[40];
	int mid;
	int final;
	int quiz;
	double mean;
};

typedef struct personscore pscore;

int main() {
	pscore p;
	FILE *f;
	int being = 0;
	char fname[] = "score.txt";
	char name[40];
	char add;
	int final_num = 0;
	printf("�˰� ���� �л��� �̸��� �Է��ϼ��� : ");
	scanf("%s", name);

	if (fopen_s(&f, fname, "r") != 0) { // ���� �б� ���
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	while (!feof(f)) {
		final_num++;
		fscanf(f, "%d %s %d %d %d %lf", &p.number, &p.name, &p.mid, &p.final, &p.quiz, &p.mean);
		if (strcmp(name,p.name) == 0) {
			printf("�����մϴ�. �л��� ���� ���.\n");
			printf("%6d %18s %8d %8d %8d     %lf\n", p.number, p.name, p.mid, p.final, p.quiz, p.mean);
			being = 1;
		}
	}
	fclose(f);

	char str[100];
	fopen_s(&f, fname, "a"); // ���� �߰� ���
	if (being == 0) {
		printf("�л��� ������ �߰� �Ͻðڽ��ϱ�? (Y/N) ");
		scanf(" %c", &add);
		getchar(); // ���� �����
		if (add == 'Y') {
			fgets(str, 80, stdin);
			sscanf(str, "%d %d %d\n",&p.mid, &p.final, &p.quiz);
			p.mean = (p.mid + p.final + p.quiz) / 3.0;
			fprintf(f, "%d %s %d %d %d %lf\n", final_num, name, p.mid, p.final, p.quiz, p.mean);
		}
	}
	fclose(f);
}