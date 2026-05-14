#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void maths () {
    
    int s=9;
    double a=2, b=3, x=3.3, y=9.9, p=3.5, q=5.8, z= -5.3;

    double power = pow (a, b);
    double square = sqrt (s);  
    double absolute = abs (z);
    double ceiling = ceil (x), ceiling2 = ceil(p), ceiling3 = ceil(q);
    double floorValue = floor (y), floorValue2 = floor (p), floorValue3 = floor (q);

    printf ("power: %llf \n", power);
    printf ("square: %llf \n", square);
    printf ("absolute: %llf \n", absolute);
    printf ("ceiling: %llf %llf %llf \n", ceiling, ceiling2, ceiling3);
    printf ("floor: %llf %llf %llf \n", floorValue, floorValue2, floorValue3);
    printf ("Integer value: %llf \n", trunc(x));
}

int main() {
    
    maths ();
    
    return 0;
}