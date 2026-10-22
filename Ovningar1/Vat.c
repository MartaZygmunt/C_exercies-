#include<stdio.h>


int main() {


    double amount;
    printf("Enter the amount: ");
    scanf("%lf", &amount);

    double vat = amount * 0.25;
    printf("The VAT for %.2lf is %.2lf\n", amount, vat);

    return 0;
}