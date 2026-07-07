#include <stdio.h>

struct Vehicle
{
    char RegNo[20];
    char Model[30];
    char Manufacturer[30];
    int Year;
    float RentalFee;
};

int main()
{
    struct Vehicle Vehicle1;

    printf("Enter Registration Number: ");
    scanf("%19s", Vehicle1.RegNo);

    printf("Enter Vehicle Model: ");
    scanf("%29s", Vehicle1.Model);

    printf("Enter Manufacturer: ");
    scanf("%29s", Vehicle1.Manufacturer);

    printf("Enter Year of Manufacture: ");
    scanf("%d", &Vehicle1.Year);

    printf("Enter Daily Rental Charge: ");
    scanf("%f", &Vehicle1.RentalFee);

    printf("\n");
    printf("========================================\n");
    printf("      VEHICLE REGISTRATION REPORT\n");
    printf("========================================\n");

    printf("Registration No.   : %s\n", Vehicle1.RegNo);
    printf("Vehicle Model      : %s\n", Vehicle1.Model);
    printf("Manufacturer       : %s\n", Vehicle1.Manufacturer);
    printf("Year Manufactured  : %d\n", Vehicle1.Year);
    printf("Daily Rental Fee   : Ksh %.2f\n", Vehicle1.RentalFee);

    printf("========================================\n");

    return 0;
}