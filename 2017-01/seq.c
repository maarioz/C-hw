#include <stdio.h>
#include "common.h"

void seq(void) {
    printf("Number: ");
    unsigned int a;
    
    scanf("%ux", &a);
    
    if (a == 0){
        printf("No sequence\n");
    }
    
    printf("First N(%d): ", a);
    unsigned int upper = 2;
    unsigned int numbers = 0;
    
    for (unsigned int i = 0; i < a; i++) {
        for (unsigned int j = 1; j < upper; j++) {
            printf("%u", j);
            numbers++;
            if (numbers == a) {
                printf("\n");
                return;
            }
            printf(",");
        }
        upper++;
    }
    printf("\n");
}
