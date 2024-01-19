#include <stdio.h>

int main()
{
    int a;
    printf("Input a number: ");
    scanf("%d", &a);

    (a % 2 == 1 && 100 <= a <= 200) ? printf("True") : printf("False");

    return 0;
}