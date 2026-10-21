#include <stdio.h>

int main() {
    int prisPerNatt;
    int antalNatter;
    
    printf("Vad kostar hotellet per natt? ");
    scanf("%d", &prisPerNatt);
    
    printf("Hur många nätter? ");
    scanf("%d", &antalNatter);
    
    int summa = prisPerNatt * antalNatter;
    printf("Det blir %dkr\n", summa);
    
    return 0;
}