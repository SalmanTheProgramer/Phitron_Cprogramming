#include <stdio.h>
#include <string.h>

int main() {    // Mid Q4: Count Me 3
    
    int t;
    scanf ("%d", &t);

    while (t--) {

        char str[10001];
        scanf ("%s", str);

        int uc=0, lc=0, digi=0;

        for (int i=0; str[i] != '\0'; i++) {

            if (str[i] >= 'A' && str[i] <= 'Z') { uc++; }else 
            if (str[i] >= 'a' && str[i] <= 'z') { lc++; }else 
                { digi++; }
        }
        
        printf ("%d %d %d\n", uc, lc, digi);
    }
    
    return 0;
}