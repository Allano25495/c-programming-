#include <stdio.h>

float calculateElectricBill(int units);

int main()
{
    int units;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    printf("Total Electricity Bill = KSh. %.2f\n", calculateElectricBill(units));

    return 0;
}

float calculateElectricBill(int units)
{
    float bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}