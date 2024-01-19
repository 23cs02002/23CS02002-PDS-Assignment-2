#include <stdio.h>

int main()
{
    int meal_cost;
    float tip_percent, tax_percent, total_cost;

    printf("Enter the meal cost");
    scanf("%d", &meal_cost);
    printf("Enter the tip percent");
    scanf("%f", &tip_percent);
    printf("Enter the tax percent");
    scanf("%f", &tax_percent);

    total_cost = meal_cost * (1 + tip_percent / 100 + tax_percent / 100);
    printf("%.0f", total_cost);

    return 0;
}