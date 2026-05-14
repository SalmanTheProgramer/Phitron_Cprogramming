#include <stdio.h>
#include <string.h>

int main() {    // Mid Q2: Count Me 2
    
    char str[100001];
    scanf ("%s", str);

    // char vow[] = {'a', 'e', 'i', 'o', 'u'};
    int conso = 0;

    for (int i=0; str[i]!='\0'; i++) {

        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {

            conso++;
        }
    }
    
    printf ("%d", conso);

    return 0;
}