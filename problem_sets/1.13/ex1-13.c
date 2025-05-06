#include <stdio.h>

#define MAX_WORD_LEN 20 // track words len up to 20
#define IN      1       //we are inside of a word
#define OUT     0       // we are outside of a word
int main() {
    //write a program to print a histogram  of the lengths of words in its input
    //example input this is  C   programming
    //example output vertical
    //1: *
    //2: **
    //4: *
    //11: *
    //example output horizontal
    //1: *
    //2: **
    //4: ***
    //11: ****
    //each * represents one word of that length

    int c, i, length = 0;
    int state = OUT;

    int word_lengths[MAX_WORD_LEN + 1]; //index 1..20
    for (i = 0; i <= MAX_WORD_LEN; ++i)
        word_lengths[i] = 0;    //init all counts to 0
    //Read input one char at a time
    while ((c = getchar())  != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            //when we hit whitespace, the word ends
            if (state == IN){
                if (length > MAX_WORD_LEN)
                    length = MAX_WORD_LEN;   // Cap very long words
                ++word_lengths[length];     //Count the word by its length
                length = 0;
                state = OUT;

        }
    } else {
        //we are reading part of a word
       if (state == OUT)
           state = IN;
       ++length;
    }
}

//print the histogram
printf("\nWord Length Histogram:\n");
for (i = 1; i <=MAX_WORD_LEN; ++i) {
    if (word_lengths[i] > 0) {
        printf("%2d: ", i);
        for (int j = 0; j < word_lengths[i]; ++j)
            putchar('*');
        putchar('\n');
    }
}

return 0;
}
