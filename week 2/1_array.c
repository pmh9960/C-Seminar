#include <stdio.h>

int main()
{
    int arr1[5];
    int arr2[5] = {};
    int arr3[5] = {5, 22, 7, 2, 30};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    // 57 7083364 6422376 4200299 4200192
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    // 0 0 0 0 0
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    // 5 22 7 2 30

    printf("%p\n", arr3);     // 0061FEB0
    printf("%p\n", &arr3[0]); // 0061FEB0
    printf("%p\n", &arr3[1]); // 0061FEB4
    printf("%p\n", &arr3[2]); // 0061FEB8

    return 0;
}