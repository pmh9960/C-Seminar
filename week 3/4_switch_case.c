#include <stdio.h>

int main()
{
    int n;
    printf("1부터 5사이의 숫자를 고르시오.\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Sunny");
        break;
    case 2:
        printf("Cloudy");
        break;
    case 3:
        printf("Dark");
        break;
    case 4:
        printf("Foggy");
        break;
    case 5:
        printf("Rain");
        break;
    default:
        printf("Out of range!");
        break;
    }
}