#include <stdio.h>

void fake_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main()
{
    int a = 1, b = 2;
    // fake_swap(a, b);
    swap(&a, &b);
    printf("a : %d\nb : %d", a, b);
}