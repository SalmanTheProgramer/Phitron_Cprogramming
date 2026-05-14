#include <stdio.h>
#include <ctype.h>

int main() {
    
    // Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N 
    // Prob: "N. Char" in cludes 4 tricks ***
    char a;
    scanf (" %c", &a);

    // includes 2 tricks
    if (a >= 'A' && a <= 'Z') {

        //int i = a+32;  // Trick 1: ASCII arithmetic (most common)
        a = a ^ 32;  // Trick 2: bit manipulation (*** Advanced ***)
        printf ("%c", a);

    }else {

        //int j = a-32;
        a = a ^ 32;
        printf ("%c", a);

    }

    // // Trick 3: using 'ctype.h' Library (Best Practice) ***
    // if (islower(a)) {
        
    //     a = toupper(a);
    //     printf ("%c", a);

    // }else {

    //     a = tolower(a);
    //     printf ("%c", a);
    // }

    // // Trick 4: Direct chararcter mapping (less used)
    // if (a >= 'a' && a<= 'z') {
        
    //     a = 'A' + (a - 'a');
    //     printf ("%c", a);
    
    // }else {

    //     a = 'a' + (a - 'A');
    //     printf ("%c", a);

    
    return 0;
}