#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int n;
    scanf ("%d", &n); 

    bool x = false;

    if (n > 1000) {

        printf ("I will buy Punjabi\n");

        int temp = n - 1000;

        if (temp >= 500) {
            
            printf ("I will buy new shoes\n");

            x = true;

        }
    }else {
        
        printf ("Bad luck!\n");

    }

    if (x == true) {

        printf ("Alisa will buy new shoes\n");

    }

    return 0;
}