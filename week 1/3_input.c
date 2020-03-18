#include <stdio.h>

int main(void)
{
    int n;
    char c;
    float f;                          // 항상 선언 먼저
    scanf("%d %c %f", &n, &c, &f);    // 입력 받기
    printf("%d %c %f\n", n, c, f);    // 입력 받은 값 출력
    printf("%p %p %p\n", &n, &c, &f); // 입력 받은 주소 출력

    system("pause");
    return 0;
}