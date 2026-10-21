#include <stdio.h>

int main (void) {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue; // Skip the rest of the loop when i is 3
        }
        printf("i: %d\n", i);
    }
    return 0;
}