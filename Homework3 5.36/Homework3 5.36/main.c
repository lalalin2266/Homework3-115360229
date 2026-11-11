#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void hanoi(int n, int a, int b, int c) {
	if (n == 1) {
		printf("%d -> %d\n", a, c);
	}
	else {
		hanoi(n - 1, a, c, b);//先把n-1個放在b，才可以把最大的n放在c
		hanoi(1, a, b, c);//把n放到c
		hanoi(n - 1, b, a, c);//把剩下的放到c
	}
}

int main(void) {
	int n;
	printf("Please input n:");
	scanf("%d", &n);
	hanoi(n, 1, 2, 3);
}