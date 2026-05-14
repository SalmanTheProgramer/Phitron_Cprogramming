#include <stdio.h>
#include <string.h>

int main() {    // Mid Q2: Count Me 2
    
    char str[100001];
    scanf ("%s", str);

    char vow[] = {'a', 'e', 'i', 'o', 'u'};
    int conso = 0;

    for (int i=0; str[i]!='\0'; i++) {

        for (int j=0; j<5; j++) {

            if (str[i] != vow[j]) {

                conso++;
            }
        }
    }
    
    printf ("%d", conso);

    return 0;
}