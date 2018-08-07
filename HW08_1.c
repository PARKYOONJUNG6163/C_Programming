#include <stdio.h>

struct Student {
	char name[10];
	char num[20];
	int grade;
};

int main() {
	struct Student s[5] = { { .name = "송하나",.num = "201513579",.grade = 100 },
	{ .name = "홍길동",.num = "199054321",.grade = 20 },
	{.name = "태진아",.num = "199015234",.grade = 80 },
	{ .name = "맥크리",.num = "199724680",.grade = 80 },
	{ .name = "김치찜",.num = "201012345",.grade = 50 }};

	printf("학생의 정보를 입력하세요.\n 이름\t 학번\t 점수\n");
	printf("%s %s% d\n",s[0].name, s[0].num, s[0].grade);
	printf("%s %s% d\n", s[1].name, s[1].num, s[1].grade);
	printf("%s %s% d\n", s[2].name, s[2].num, s[2].grade);
	printf("%s %s% d\n", s[3].name, s[3].num, s[3].grade);
	printf("%s %s% d\n", s[4].name, s[4].num, s[4].grade);
	printf("\n");

	int max = 0;
	int min = 0;
	for (int i = 0; i < 5; i++) {
		if (s[max].grade < s[i].grade) max = i;
		if (s[min].grade > s[i].grade) min = i;
	}
	printf("최고점 :\n");
	printf("\t이름 \t학번 \t점수\n");
	printf("\t%s %s% d\n", s[max].name, s[max].num, s[max].grade);
	printf("\n");
	printf("최저점 :\n");
	printf("\t이름 \t학번 \t점수\n");
	printf("\t%s %s% d\n", s[min].name, s[min].num, s[min].grade);
	printf("\n");

	double avg = (s[0].grade + s[1].grade + s[2].grade + s[3].grade + s[4].grade) / 5.0;
	printf("평균 : %f\n",avg);
}