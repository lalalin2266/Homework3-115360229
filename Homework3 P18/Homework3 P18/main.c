#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main(void)
{
    char string1[60] = "Welcome";
    char string2[60];

    int len;

    strcpy_s(string2, sizeof(string2), string1);
    printf("string2=%s\n", string2);

    len = strlen(string2);
    printf("String length is %d\n", len);

    system("pause");
    return 0;
}