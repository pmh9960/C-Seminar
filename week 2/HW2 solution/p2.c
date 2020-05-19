#include <stdio.h>

int main()
{
    int i, j;
    // 정사각형
    printf("정사각형\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 직사각형
    printf("직사각형\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 직각 이등변 삼각형 ◣
    printf("직각 이등변 삼각형 ◣\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 직각 이등변 삼각형 ◥
    printf("직각 이등변 삼각형 ◥\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 7 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 마름모 ◆
    printf("마름모 ◆\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 3; i >= 0; i--)
    {
        for (j = 0; j < 3 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}