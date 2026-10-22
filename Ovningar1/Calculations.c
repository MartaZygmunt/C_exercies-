#include <stdio.h>
int main(void) {

    double num1,num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    double average = (num1 + num2) / 2.0;
    printf("The average of %.2lf and %.2lf is %.2lf\n", num1, num2, average);

    double difference = num1 - num2;
    printf("The difference between %.2lf and %.2lf is %.2lf\n", num1, num2, difference);

    double sum = num1 + num2;
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);

    return 0;
}