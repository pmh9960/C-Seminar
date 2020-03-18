#include <stdio.h>

int main(void)
{
    int i = 3;
    float f = 3.14;
    char c = 'A';

    printf("int : %d\n", i);
    printf("float : %.2f\n", f);
    printf("char : %c\n", c);

    const int j = 10;
    // j = 5 // error
    system("pause");
    return 0;
}