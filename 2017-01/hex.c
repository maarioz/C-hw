#include <stdio.h>
#include "common.h"

void hex(void) {
    printf("Number: ");
    
    unsigned int a;
    unsigned char byte[4];
    
    scanf("%u", &a);
    printf("Hex: 0x%0*x\n", 8, a);
    
    byte[0] = (a & 0xFF);
    byte[1] = (a >> 8) & 0xFF;
    byte[2] = (a >> 16) & 0xFF;
    byte[3] = (a >> 24) & 0xFF;
    
    printf("Rotated: %0*x", 2, byte[0]);
    printf(" %0*x", 2, byte[1]);
    printf(" %0*x", 2, byte[2]);
    printf(" %0*x\n", 2, byte[3]);
}

