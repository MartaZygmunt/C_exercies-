#include<stdio.h>

int main(void) {

    int minutes;
    printf("Enter minutes: ");  
    scanf("%d", &minutes);

    int hours = minutes / 60;
    int remaining_minutes = minutes % 60;
    printf("Time: %d hours and %d minutes\n", hours, remaining_minutes);

    return 0;
}