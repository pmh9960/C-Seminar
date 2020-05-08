#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    printf("size of char : %d\n", sizeof(c));  // 1
    printf("size of int : %d\n", sizeof(i));   // 4
    printf("size of float : %d\n", sizeof(f)); // 4

    printf("size of long long : %d\n", sizeof(long long)); // 8
    printf("size of double : %d\n", sizeof(double));       // 8

    char str1[] = "Hello World!";
    printf("size of str1 : %d\n", sizeof(str1)); // 13

    int str2[] = {0, 1, 2, 50, 100, 12, 123451};
    printf("size of str2 : %d\n", sizeof(str2));                     // 28
    printf("length of str2 : %d\n", sizeof(str2) / sizeof(str2[0])); // 7
    // printf("length of str2 : %d\n", sizeof(str2) / sizeof(int));     // 7

    return 0;
}