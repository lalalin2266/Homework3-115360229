#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int now = 0;

    for (unsigned int k = 3; k <= n; k++) {
        now = a + b;
        a = b;
        b = now;
    }
    return now;
}

int main(void) {
    unsigned int n;
    printf("Please input the number of fibonacci: ");
    scanf("%u", &n);
    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    return 0;
}