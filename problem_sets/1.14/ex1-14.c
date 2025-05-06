#include <stdio.h>
#define ALPHABET_SIZE 26

//write a prog that print a histogram of the char freq vertically
int main() {
    int c, i, j;
    int freq[ALPHABET_SIZE] = {0}; //freq[0]= a, freq[1]= b, freq[2]= c

    //step 1: read input and count letter freq
    while ((c = getchar())  != EOF) {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A'); //convert uppercase to lowercase
        }

        if (c >= 'a' && c <= 'z') {
            ++freq[c - 'a'];    // Map 'a' to 0, 'b' to 1.. 'z' to 25
        }
    }

    //step 2: find the highest freq (for chart height)
    int max = 0;
    for (i = 0; i < ALPHABET_SIZE; ++i) {
        if (freq[i] > max)
            max = freq[i];
    }

    //step 3: print the histogram vertically
    printf("\nVertical Charachter Frequency Histogram:\n\n");

    //Print from top (max) down to 1
    for (i = max; i > 0; --i) {
        for (j =0; j < ALPHABET_SIZE; ++j) {
            if (freq[j] >= i)
                printf(" * ");
            else
                printf("   ");  //print space if no star on this level
        }
        putchar('\n');
    }

    //step 4: print bottom border
    for (i = 0; i < ALPHABET_SIZE; ++i)
        printf("---");
    putchar('\n');

    //step 5: Print labels (a-z)
    for (i = 0; i < ALPHABET_SIZE; ++i)
        printf(" %c ", 'a' + i);
    putchar('\n');

    return 0;
}
