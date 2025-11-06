/*
Name: Griffin Waruinge Njuguna
Reg No: CT101/G/26480/25
Description: Daily sale transaction (manual input version)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float amount, total = 0.0;

    printf("Enter sales amounts one by one (enter -1 to finish):\n");

    while (1) {
        printf("Enter amount: ");
        scanf("%f", &amount);

        if (amount < 0)
            break;

        total += amount;
    }

    printf("\nTotal sales for the day: $%.2f\n", total);

    return 0;
}