#include <stdio.h>
#include <ctype.h>

int main() { // problems from CodeForces .........
    
    // int a, b;
    // scanf ("%d %d", &a, &b);

    // Prob: I. Welcome for you with Conditions 
    // if (a >= b) {

    //     printf ("Yes");
    
    // }else {

    //     printf ("No");
    // }



    // Prob: J. Multiples
    // if (a%b == 0 || b%a == 0) {

    //     printf ("Multiples");

    // }else {

    //     printf ("No Multiples");
    // } 

    
    
    // Prob: P. First digit !
    // int x;
    // scanf ("%d", &x);

    // int temp = x/1000;

    // if (temp%2 == 0) {

    //     printf ("EVEN");

    // }else {
        
    //     printf ("ODD");

    // }


    //// Prob: "N. Char" in cludes 4 tricks ***
    // {
        // char a;
        // scanf (" %c", &a);

        //// includes 2 tricks
        // if (a >= 'A' && a <= 'Z') {

        //     //int i = a+32;  // Trick 1: ASCII arithmetic (most common)
        //     a = a ^ 32;  // Trick 2: bit manipulation (*** Advanced ***)
        //     printf ("%c", a);

        // }else {

        //     //int j = a-32;
        //     a = a ^ 32;
        //     printf ("%c", a);

        // }

        //// Trick 3: using 'ctype.h' Library (Best Practice) ***
        // if (islower(a)) {
            
        //     a = toupper(a);
        //     printf ("%c", a);

        // }else {

        //     a = tolower(a);
        //     printf ("%c", a);
        // }

        //// Trick 4: Direct chararcter mapping (less used)
        // if (a >= 'a' && a<= 'z') {
            
        //     a = 'A' + (a - 'a');
        //     printf ("%c", a);
        
        // }else {

        //     a = 'a' + (a - 'A');
        //     printf ("%c", a);

        // 
    // }



    // // Prob: M. Capital or Small or Digit
    // char x;
    // scanf ("%c", &x);

    // if (x >= '0' && x <= '9') {

    //     printf ("IS DIGIT");

    // }else {

    //     printf ("ALPHA\n");

    //     if(x >= 'A' && x <= 'Z') {

    //         printf ("IS CAPITAL");

    //     }else {
    //         printf ("IS SMALL");
    //     }
    // }


    // Prob: K. Max and Min
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    int max=c, min=c;  

    // condition to find max
    if (a>=b && a>=c) {max = a;}
    else if (b>=a && b>=c) {max = b;}
    else {max = c;}

    // condition to find min
    if (a<=b && a<=c) {min = a;}
    else if (b<=a && b<=c) {min = b;}
    else {min = c;}

    printf ("%d %d", min, max);
    
    return 0;
}