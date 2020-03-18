#include <stdio.h>

int main()
{
    // Hello World 100번 출력
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("Hello World!\n");
    }
    printf("\n");

    // 1부터 100까지 더하기
    int cnt = 1;
    int sum = 0;
    while (cnt <= 100)
    {
        sum += cnt;
        cnt++;
        // 줄이면 sum += cnt++;
    }
    printf("%d\n", sum); // 5050
    printf("\n");

    // a와 b가 같아질 때 까지 두 수의 차이 출력
    int a = 0; // 99와 100 넣어볼 것
    int b = 100;
    do
    {
        printf("%d\n", b - a); // 100 99 ... 1
        a++;
    } while (a != b);
    printf("\n");

    system("pause");
    return 0;
}