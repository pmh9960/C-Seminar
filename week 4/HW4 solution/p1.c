#include <stdio.h>

// 기존에 사용한 유클리드 호제법을 이용한 gcd 가져옴
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int a, b;
    printf("서로 다른 두 수를 입력하시오\n");
    scanf("%d %d", &a, &b);

    printf("두 수의 최소공배수는 %d 입니다.\n", lcm(a, b));

    return 0;
}

int gcd(int a, int b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    } // 항상 a가 b보다 크거나 같아야 함.

    if (a == 0)
        return 0;
    else if (b == 0)
        return 0; // a, b에 0을 넣지 마세요.

    if (a % b == 0)
        return b;

    return gcd(a % b, b);
}

int lcm(int a, int b)
{
    int g = gcd(a, b);
    return a * b / g;
}