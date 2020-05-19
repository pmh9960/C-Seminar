#include <stdio.h>

int main()
{
    char str[100];
    printf("소문자로 이루어진 영문 문자열을 100자 이내로 입력하시오.\n");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        str[i] -= 32;
        i++;
    }
    printf("%s", str);

    return 0;
}