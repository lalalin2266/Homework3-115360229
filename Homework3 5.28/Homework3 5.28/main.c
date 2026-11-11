#include<stdio.h>
#include<stdlib.h>
char change(char a);
int main() {
	int a;
	printf("Enter an alphabet:");
	scanf_s("%c", &a);
	printf("%c", change(a));
}
char change(char a) {
	if (a >= 97 && a <= 122) {
		return a - 32;
	}
	if (a >= 65 && a <= 90) {
		return a + 32;
	}
}