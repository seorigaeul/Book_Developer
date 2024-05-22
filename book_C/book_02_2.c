#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int c, d;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	printf("%d\n", a * b);
	printf("%d", c * d);
}