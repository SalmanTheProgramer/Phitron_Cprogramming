#include <stdio.h>

int main() {    // Mid Q1: Count Me 1
    
    int n;
    scanf ("%d", &n);   // take size of array

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);  // take array elements
    }

    int count2 = 0, count3 = 0;

    // traversing array elements 
    for (int i=0; i<n; i++) {

        if (arr[i]%2 == 0) {   //searching the number that are divided by 2

            count2++;

        } else if (arr[i]%3 == 0) {  //searching the number that are divided by 3 

            count3++;
        }
    }

    // Output
    printf ("%d %d", count2, count3);
    
    return 0;
}