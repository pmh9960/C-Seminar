#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int gcd_eucildean(int a, int b)
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

    return gcd_eucildean(a % b, b);
}

int main()
{
    printf("%d", gcd_eucildean(10, 5));
}