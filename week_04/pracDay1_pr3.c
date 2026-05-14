#include <stdio.h>


int asciiVal (char a) {

    return (int)a;
}

int main() {
    
    char ch;
    scanf ("%c", &ch);

    printf ("%d", asciiVal(ch));
    
    return 0;
}