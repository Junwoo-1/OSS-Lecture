#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int main() {
	int s, m, n;
	printf("덧셈 : 1, 뺄셈 : 2 ");
	scanf("%d", s);
	if ( s == 1 ) {
		printf("더할 숫자 입력 1 : ");
		scanf("%d", m);
		printf("더할 숫자 입력 2 : ");
		scanf("%d", n);
		sum(m,n);
	}
	else if ( s == 2) {
		printf("뺄 숫자 입력 1 : ");
		scanf("%d", m);
		printf("뺄 숫자 입력 2 : ");
		scanf("%d", n);
		sub(m,n);
	}
	return 0;
}
