#include <stdio.h>
// problem 1: Pattern

int main() {
    
    int n;
    scanf ("%d", &n);

    int whiteSpace = n-1, star = 1; 

    for (int i=1; i<=(2*n)-1; i++) {

        // White spaces
        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");
        }

        // Pattern
        for (int j=1; j<=star; j++) {

            if (i%2 == 0) { // '-' at even indices

                printf ("-");

            }else { // '#' at odd indices

                printf ("#");
            }
        }

        if (i <= n-1) { // Upper Pyramid

            whiteSpace--;
            star+=2;

        }else { // lower Pyramid

            whiteSpace++;
            star-=2;
        }

        printf ("\n");
    }
    
    return 0;
}