#include <stdio.h>

//remove anycharacter from s1 that appears in s2

void squeeze(char s1[], char s2[]) {
    int i, j, k;
    int match;

    //loop through s2 to see if s1[i] appears in it
    for (i = j = 0; s1[i] != '\0'; ++i) {
            match = 0;

            for (k = 0; s2[k] != '\0'; ++k) {
                 if (s1[i] == s2[k]) {
            match = 1;
            break;
        }
    }

    //if no match, keep the character
    if (!match)
        s1[j++] = s1[i];
    }
    s1[j] = '\0'; // Null-terminate the new string

}

int main(){
    char s1[] = "battle";
    char s2[] = "ae";

    squeeze(s1,s2);
    printf("Result: %s\n", s1); //output should be "bttl"
}
