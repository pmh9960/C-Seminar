int main()
{
    // 이차원 배열 선언 및 출력
    int arr[2][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // 1 2 3 4
    // 5 6 7 8

    // 15개의 int 입력
    int arr2[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // arr2에 들어가있는대로 출력
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    char str[5][100];
    scanf("%s", str[0]);
    printf("%s", str[0]);

    return 0;
}