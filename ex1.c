#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int i = INT_MAX;
    unsigned short us = USHRT_MAX;
    signed long int sl = LONG_MAX;
    float f = FLT_MAX;
    double d = DBL_MAX;

    printf("int: %d,  %zu bytes\n", i, sizeof(i));
    printf("unsigned short: %u,  %zu bytes\n", us, sizeof(us));
    printf("signed long int: %ld,  %zu bytes\n", sl, sizeof(sl));
    printf("float: %f, %zu bytes\n", f, sizeof(f));
    printf("double: %lf, %zu bytes\n", d, sizeof(d));

    return 0;
}
