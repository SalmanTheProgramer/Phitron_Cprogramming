#include <stdio.h>
#include <string.h>

int main() {    // Mid Q5: Count Me 4
    
    char str[100001];
    scanf ("%s", str);

    int count[26] = {0};

    for (int i=0; str[i]!= '\0'; i++) {

        int val = str[i] -'a';
        count[val]++ ;

    }

    for (int i=0; i<26; i++) {

        // if (count[i] == 0) { continue; }else 
        //     {printf ("%c - %d\n", i+ 'a', count[i]);}

        if (count[i] > 0) { 
            
            printf ("%c - %d\n", 'a' +i, count[i]); 
        }

    }
    
    return 0;
}