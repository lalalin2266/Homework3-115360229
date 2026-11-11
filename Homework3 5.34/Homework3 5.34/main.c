#include <stdio.h>
#include <stdlib.h>
long long power(int base, int exponent);
int main() {
    int base, exponent;
    printf("Enter base:");
    scanf_s("%d", &base);
    printf("Enter exponent:");
    scanf_s("%d", &exponent);
    if (exponent < 1) {
        printf("Enter exponent that larger than or equal to 1\n");
        return 0;
    }
    printf("power(%d,%d)=%lld\n", base, exponent, power(base, exponent));
    return 0;
}
long long power(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent - 1);
    }
}
