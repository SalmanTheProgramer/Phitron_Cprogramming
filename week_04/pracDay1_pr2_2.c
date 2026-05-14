#include <stdio.h>

int main() {
    
    int n;
    scanf ("%d", &n);

    int whiteSpace = n-1, star = 1;

    for (int i=0; i<n; i++) {

        for (int j=1; j<=whiteSpace; j++) {

            printf (" ");
        }

        for (int j=1; j<=star; j++) {

            printf ("*");
        }

        printf ("\n");

        whiteSpace--;
        star+=2;
    }
    
    return 0;
}