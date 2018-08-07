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
	printf("알고 싶은 학생의 이름을 입력하세요 : ");
	scanf("%s", name);

	if (fopen_s(&f, fname, "r") != 0) { // 파일 읽기 모드
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	while (!feof(f)) {
		final_num++;
		fscanf(f, "%d %s %d %d %d %lf", &p.number, &p.name, &p.mid, &p.final, &p.quiz, &p.mean);
		if (strcmp(name,p.name) == 0) {
			printf("존재합니다. 학생의 정보 출력.\n");
			printf("%6d %18s %8d %8d %8d     %lf\n", p.number, p.name, p.mid, p.final, p.quiz, p.mean);
			being = 1;
		}
	}
	fclose(f);

	char str[100];
	fopen_s(&f, fname, "a"); // 파일 추가 모드
	if (being == 0) {
		printf("학생의 정보를 추가 하시겠습니까? (Y/N) ");
		scanf(" %c", &add);
		getchar(); // 버퍼 지우기
		if (add == 'Y') {
			fgets(str, 80, stdin);
			sscanf(str, "%d %d %d\n",&p.mid, &p.final, &p.quiz);
			p.mean = (p.mid + p.final + p.quiz) / 3.0;
			fprintf(f, "%d %s %d %d %d %lf\n", final_num, name, p.mid, p.final, p.quiz, p.mean);
		}
	}
	fclose(f);
}