#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    
    if (fgets(name, sizeof(name), stdin) != NULL) {
        printf("Hello, %s", name);
    }

    return 0;
}