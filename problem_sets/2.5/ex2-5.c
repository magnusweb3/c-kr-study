#include <stdio.h>

//returns the first location s1 where char s2 occurs
// any("battle", "ae") → 1   // 'a' appears at index 1
// any("dog", "xyz")   → -1  // no matches
// any("cat", "tq")    → 2   // 't' at index 2
int any(char s1[], char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0'; ++j) {
            if (s1[i] == s2[j])
                return i;   // return index of first match
        }
    }

    return -1;  //no matches found
}

int main() {
    printf("Result: %d\n", any("battle", "ae"));  // Expected: 1
    printf("Result: %d\n", any("hello", "xyz"));  // Expected: -1
    printf("Result: %d\n", any("cat", "tq"));     // Expected: 2
    return 0;
}
