#include <stdio.h>

// pracDay1_pr2.c

int main() {
    
    int n;
    scanf ("%d", &n);

    int whiteSpace = n-1, star = 1;

    for (int i=0; i<n; i++) {

        // white spaces
        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");
        }

        // stars
        for (int j=1; j<=star; j++) {

            printf ("*");
        }

        printf ("\n");

        whiteSpace--;
        star++;
    }
    
    return 0;
}