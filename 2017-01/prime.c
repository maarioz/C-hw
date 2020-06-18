#include <stdio.h>
#include <math.h>
#include "common.h"

void prime(void) {
    unsigned long long int a;
    printf("Number: ");
    scanf("%llu", &a);
    
    if (a == 1) {
        printf("Number %llu is not a prime.\n", a);
        return;
    }
    
    for (unsigned long long int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            printf("Number %llu is not a prime.\n", a);
            return;
        }
    }
    printf("Number %llu is a prime.\n", a);
}
