#include <stdio.h>
#include <string.h>
// problem 4: Is Palindrome?

int is_palindrome (char s[]) {  // Given func ()

    int i=0, j = strlen (s)-1;
    while (i < j) { // 2 pointers tech. to check pallindrome

        if (s[i] != s[j]) return 0;

        i++;
        j--;
    }

    return 1;
}

int main() {
    
    char s[1001];
    scanf ("%s", s);

    int temp = is_palindrome (s);   // call of func()

    // decide palindrom or not
    if (!temp) {

        printf ("Not Palindrome");
    
    }else {

        printf ("Palindrome");
    }
    
    return 0;
}