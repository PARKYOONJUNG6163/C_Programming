#include <stdio.h>
#define PLUS 1
#define MINUS 2
#define MULT 3
#define MODE MULT
// #define MY_FUNC(a,b) MODE == PLUS? a+b : MODE == MINUS? a-b : a*b
#if MODE == PLUS
#define MY_FUNC(a,b) a+b
#endif
#if MODE == MINUS 
#define MY_FUNC(a,b) a-b
#endif
#if MODE == MULT 
#define MY_FUNC(a,b) a*b
#endif

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("MY_FUNC(%d , %d) = %d ¿‘¥œ¥Ÿ\n", a, b, MY_FUNC(a, b));
}