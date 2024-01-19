#include <stdio.h>

int main()
{
    int a, p;
    printf("Enter the number : ");
    scanf("%d", &a);

    p = a & 1;
    (p % 2 == 0) ? printf("The number is even") : printf("The number is odd");

    return 0;
}