#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter three integers");
    scanf("%d %d %d", &a, &b, &c);

    d = (a > b) ? a : b;
    e = (b > c) ? b : c;
    printf("Max number is %d", (d >= e) ? d : e);

    return 0;
}