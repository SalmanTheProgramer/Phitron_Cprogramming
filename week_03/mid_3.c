#include <stdio.h>

int main() {
    
    int t;
    scanf ("%d", &t);
    
    while (t--) {

        /* Let,
            M1 = given farmers
            d = given working days for M1
            m2 = given additional farmers
            M2 = M1 + m2
            D = ?
            result = d - D
        */

        int M1, m2, d;
        scanf ("%d %d %d", &M1, &m2, &d);

        int M2 = M1 + m2;
        int D = (M1 * d) / M2;

        printf ("%d\n", d-D);
    }
    
    return 0;
}