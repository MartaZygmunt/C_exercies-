#include <stdio.h>

int main() {
    int tal1;
    int tal2;

    printf("Enter number 1: ");
    scanf("%d", &tal1);
    
    printf("Enter number 2: ");
    scanf("%d", &tal2);
    
    printf("The sum of %d and %d is %d\n", tal1, tal2, tal1 + tal2);

    return 0;
}