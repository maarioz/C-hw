#include <stdio.h>
#include "common.h"

void power(void) {
    
    unsigned long long int a;
    unsigned int b;
    unsigned long long int c = 1;
    
    printf("Number: ");
    scanf("%llu", &a);
    printf("Power: ");
    scanf("%u", &b);
    
    if (a == 0 && b == 0 ) {
        printf("Unsupported operation.\n");
    }
    unsigned int i = 1;
    while (i <= b) {
        c = c * a;
        i++;
    }
    printf("%llu ^ %u = %llu\n", a, b, c);
}
