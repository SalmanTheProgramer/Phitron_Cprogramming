#include <stdio.h>


char smallToCapital (char a) {

    a = a ^ 32;

    return a;
}

int main() {
    
    char ch;
    scanf ("%c", &ch);

    printf ("%c", smallToCapital (ch));
    
    return 0;
}