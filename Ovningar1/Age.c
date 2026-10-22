#include <stdio.h>
#include <time.h>

int main(void){
    int birthdayyear;

    printf("Enter your birth year: ");
    scanf("%d", &birthdayyear);

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    int currentyear = local->tm_year + 1900;
    int age = currentyear - birthdayyear;
    printf("You are %d years old.\n", age); 
    return 0;
}
