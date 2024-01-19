#include <stdio.h>

int main()
{
    int N, a, b, c, d;

    printf("Enter total number of Days: ");
    scanf("%d", &N);

    a = N / 365;
    b = (N - a * 365) / 30;
    ;
    c = (N - a * 365 - b * 30) / 7;
    d = (N - a * 365 - b * 30 - c * 7);

    printf("Years = %d \nMonths = %d \nWeeks = %d \nDays = %d", a, b, c, d);

    return 0;
}