#include <stdio.h>
// problem 2: Pattern 2

int main() {
    
    int n;
    scanf ("%d", &n);

    int whiteSpace = n-1, star = 1;

    for (int i=1; i<=n; i++) {

        // White spaces
        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");
        }

        // Pattern
        for (int j=star; j>0; j--) {

            printf ("%d", j);
        }

        printf ("\n");

        whiteSpace--;
        star++;
    }
    
    return 0;
}