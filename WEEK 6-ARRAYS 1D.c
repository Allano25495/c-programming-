#include <stdio.h>

int main()
{
    float revenue[7];
    float total = 0;
    float average;
    int i;

    printf("Hotel Management System\n");
    printf("Weekly Revenue Tracker\n\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);

        total = total + revenue[i];
    }

    average = total / 7;

    printf("\nWeekly Revenue Report\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d Revenue: %.2f\n", i + 1, revenue[i]);
    }

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}