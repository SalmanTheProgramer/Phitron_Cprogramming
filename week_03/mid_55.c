#include <stdio.h>

int main() {
    char str[10005];   // buffer for input string (constraint: up to 10000 chars)
    scanf("%s", str);

    int count[26] = {0};  // frequency array for 26 letters

    // Count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';  // map 'a'->0, 'b'->1, ...
        count[index]++;
    }

    // Print results
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}
