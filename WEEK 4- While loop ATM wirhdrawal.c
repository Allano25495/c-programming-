#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance = balance - withdraw;

        printf("Current balance: %.2f\n", balance);
    }

    printf("Balance is zero or negative. No more withdrawals allowed.\n");

    return 0;
}