#include <stdio.h>
#include <stdlib.h>
int lcm(int number1, int number2);
int gcd(int number1, int number2);
int main(void) {
	int number1, number2;
	printf("Enter two number:");
	scanf_s("%d %d", &number1, &number2);
	printf("The least common multiple is:%d", lcm(number1, number2));
}

int lcm(int x, int y) {
	if (x == 0 || y == 0) {
		return 0;
	}
	else {
		return	(x*y)/ gcd(x, y);
	}
}
int gcd(int x, int y) { //輾轉相除法
	int temp;
	while (y != 0) {
		temp = x % y;
		x = y;
		y = temp;
	}
	return x;
}
