/*
Program: Personal Details Input and Output
Name: Oyalo Allan Moses Otieno
Admission Number: BDSA-03-0026/2026
Date: 13/05/2026

*/

#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20];

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your bank balance in Kenya shillings: ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    printf("\n--- Details Entered ---\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: Ksh %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}