#include <stdio.h>
// problem 4: Is Palindrome?

void odd_even () {  // Given func()

    int n;
    scanf ("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {

        scanf ("%d", &arr[i]);
    }

    int even = 0, odd = 0;

    for (int i=0; i<n; i++) {   // traversing array elements

        if (arr[i]%2 == 0) {
            
            even++;
        
        }else {
            
            odd++;
        }        
    }

    printf ("%d %d", even, odd);
} 

int main() {
    
    odd_even ();    // call of func()
    
    return 0;
}