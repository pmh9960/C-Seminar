// reference https://woodforest.tistory.com/91
#include <stdio.h>

int main()
{
    char str[100];
    printf("소문자로 이루어진 영문 문자열을 100자 이내로 입력하시오.\n");
    scanf("%[^\n]s", str); // 변경 사항

    int i = 0;
    while (str[i] != '\0')
    {
        // 조건문을 쓸 수 밖에 없네요... week3에 배우는데 실수했네요;;
        if (str[i] < 97) // 소문자가 아닌 경우
        {
            // pass
        }
        else
        {
            str[i] -= 32;
        }

        i++;
    }
    printf("%s", str);

    return 0;
}