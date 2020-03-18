#include <stdio.h>

int main(void)
{
    printf("산술 연산자\n");
    printf("%d\n", 2 + 7); // 9
    printf("%d\n", 7 - 2); // 5
    printf("%d\n", 2 * 7); // 14
    printf("%d\n", 7 / 2); // 3
    printf("%d\n", 7 % 2); // 1
    printf("\n");

    printf("증감 연산자\n");
    int i = 0;
    printf("%d\n", i++); // 0
    printf("%d\n", i);   // 1
    i = 0;
    printf("%d\n", ++i); // 1
    printf("%d\n", i);   // 1
    printf("\n");

    printf("할당 연산자\n");
    int k = 5;
    k += 4;
    printf("%d\n", k); // 9
    k -= 3;
    printf("%d\n", k); // 6
    k *= 3;
    printf("%d\n", k); // 18
    k /= 4;
    printf("%d\n", k); // 4
    k %= 3;
    printf("%d\n", k); // 1
    printf("\n");

    printf("관계 연산자\n");
    int num = 5;
    printf("%d\n", num >= 5); // 1
    printf("%d\n", num > 5);  // 0
    printf("\n");

    printf("논리 연산자\n");
    printf("%d\n", num > 3 && num < 10); // 1
    printf("%d\n", num < 3 && num < 10); // 0
    printf("%d\n", num < 3 || num > 10); // 0
    printf("%d\n", num < 3 || num < 10); // 1
    printf("\n");

    printf("비트 연산자\n");
    unsigned char a = 6;  // 0000 0110
    unsigned char b = 10; // 0000 1010
    unsigned char c;
    c = a & b;
    printf("%d\n", c); // 0000 0010
    c = a | b;
    printf("%d\n", c); // 0000 1110
    c = a ^ b;
    printf("%d\n", c); // 0000 1100
    c = ~a;
    printf("%d\n", c); // 1111 1001
    c = a << 3;
    printf("%d\n", c); // 0011 0000
    c = a >> 2;
    printf("%d\n", c); // 0000 0001
    printf("\n");

    system("pause");
    return 0;
}