#include <stdio.h>

int main() {
    
    int x, y;
    long long int mul;

    scanf ("%d %d", &x, &y);

    mul = (long long)x * (long long)y;

    printf ("%d + %d = %d\n", x, y, x+y);
    printf ("%d * %d = %lld\n", x, y, mul);
    printf ("%d - %d = %d", x, y, x-y);
    
    return 0;
}