#include <stdio.h>
#include "common.h"

void add(void) {
    double x;
    double y;
    float z;
    
    printf("Enter 2 double numbers:\n");
    scanf("%lf%lf", &x, &y);
    z = x + y;
    printf("%.4lf + %.4lf = %.4lf\n", x, y, z);
}
