#include <stdio.h>

int main()
{

    char str[6] = "Hello";
    printf("%s\n", str); // Hello

    char str1[6] = "Hello!";
    printf("%s\n", str1); // Hello!Hello or Hello!~~~ trash value
    // printf("%p %p\n", str, str1); // �� str1 �ڿ� Hello�� �ٴ����� �����͸� ���� �� �� �ִ�.

    char str2[100] = {'H', 'E', 'L', 'L', 'O', '\0', 'W', 'O', 'R', 'L', 'D', '!'};
    printf("%s\n", str2); // HELLO
    // char str2[100] = {'H', 'E', 'L', 'L', 'O', 0, 'W', 'O', 'R', 'L', 'D', '!'};

    char str3[100];
    printf("���ڿ��� �ϳ� �Է��Ͻÿ�.\n");
    scanf("%s", &str3);
    // scanf("%s", str3);
    printf("%s\n", str3);

    return 0;
}