#include <stdio.h>
#include "common.h"

void ones(void) {
    printf("Number: ");
    
    unsigned long long int a;
    int ones = 0;
    
    scanf("%lluul", &a);
    unsigned long long int b = a;
    
    while (a != 0) {
        a = a & (a - 1);
        ones++;
    }
    printf("Number 0x%llx has %d ones.\n", b, ones);
}
