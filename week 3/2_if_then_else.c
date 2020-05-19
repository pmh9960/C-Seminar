#include <stdio.h>

int main()
{
    // odd even
    int n;
    printf("Type integer number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("It is even\n");
    }
    else
    {
        printf("It is odd\n");
    }
    printf("\n");

    // score
    int num;
    printf("Type your score.\n");
    scanf("%d", &num);
    if (num == 100)
    {
        printf("Awesome! You are 1st place!\n");
    }
    else if (num >= 90)
    {
        printf("Great! You are A\n");
    }
    else if (num >= 80)
    {
        printf("Good! You are B\n");
    }
    else if (num >= 70)
    {
        printf("Try a little more... You are C\n");
    }
    else
    {
        printf("YOU ARE FAIL!!! F\n");
    }

    return 0;
}