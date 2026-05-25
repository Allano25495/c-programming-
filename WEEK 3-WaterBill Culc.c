/*
Program: Water Bill Calculator
Name: Oyalo Allan Moses Otieno
Admission Number: BDSA-03-0026/2026
Description: This program calculates a customer's water bill based on
the number of water units consumed.
*/

#include <stdio.h>

int main() {
    int units;
    float totalBill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 30) {
        totalBill = units * 20;
    } else if (units >= 31 && units <= 60) {
        totalBill = units * 25;
    } else {
        totalBill = units * 30;
    }

    printf("Total water bill: %.2f KES\n", totalBill);

    return 0;
}