#include <stdio.h>

int main()
{
    int a, b;
    printf("숫자 두 개를 입력하시오.\n");
    scanf("%d %d", &a, &b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a : %d\nb : %d", a, b);
}