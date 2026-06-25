#include <stdio.h>

int main()
{
    float distance, fare;

    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);

    fare = distance * 50;

    printf("Total Fare = KSh %.2f", fare);

    return 0;
}