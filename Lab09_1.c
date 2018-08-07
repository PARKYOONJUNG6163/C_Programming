#include <stdio.h>
#include <stdlib.h>

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
	char str[100];
	p.number = 1;
	f = fopen("score.txt", "w");
	fgets(str, 80, stdin); // stdin 표준입력에서 입력 받기

	while (!feof(stdin)) { // ctrl+z만날 때까지
		sscanf(str, "%s %d %d %d\n", &p.name, &p.mid, &p.final, &p.quiz);
		p.mean = (p.mid + p.final + p.quiz) / 3.0;
		fprintf(f, "%d %s %d %d %d %lf\n", p.number,p.name, p.mid, p.final, p.quiz ,p.mean);
		p.number++;
		fgets(str, 80, stdin);
	}
	fclose(f);

	if ((f = fopen("score.txt", "r")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	fscanf(f, "%d %s %d %d %d %lf", &p.number, &p.name, &p.mid, &p.final, &p.quiz, &p.mean);
	while (!feof(f)) {
		printf("%6d %18s %8d %8d %8d     %lf\n", p.number, p.name, p.mid, p.final, p.quiz, p.mean);
		fscanf(f, "%d %s %d %d %d %lf", &p.number, &p.name, &p.mid, &p.final, &p.quiz, &p.mean);
	}
}