#include <stdio.h>
// problem 3: Count Before One

int count_before_one (int arr[], int n) {   // Given func()

    int cnt = 0;

    for (int i=0; i<n; i++) {

        if (arr[i] == 1) break;

        cnt++;
    }

    return cnt;
} 

int main() {
    
    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    // calling the func() to print
    printf ("%d", count_before_one (arr, n));
    
    return 0;
}