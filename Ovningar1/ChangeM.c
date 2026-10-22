#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int p1000 = amount / 1000;
    int p500 = (amount % 1000) / 500;
    int p200 = (amount % 500) / 200;
    int p100 = (amount % 200) / 100;
    int p50 = (amount % 100) / 50;
    int p20 = (amount % 50) / 20;
    int p10 = (amount % 20) / 10;
    int p1 = (amount % 10) / 1;

    printf("1000: %d\n", p1000);
    printf("500: %d\n", p500);
    printf("200: %d\n", p200);
    printf("100: %d\n", p100);
    printf("50: %d\n", p50);
    printf("20: %d\n", p20);
    printf("10: %d\n", p10);
    printf("1: %d\n", p1); 

    return 0;
}