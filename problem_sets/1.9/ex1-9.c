#include <stdio.h>

int main() {
    //write a program to copy its input to its output, replacing
    //each string of one or more blanks with a single blank

    //read characters from input
    //write them backout to output
    //but when you see multiple spaces in a row, only print one

    int c;
    int prev_was_space = 0; //boolean-like flag: 0=false, 1=true

    while ((c = getchar())  != EOF) {
        if (c == ' ') {
            if (!prev_was_space) {
                putchar(c);     //print the first space
                prev_was_space = 1; //mark that we saw a space
            }
            // else: do nothing (skip repeated space)
        } else {
            putchar(c);         //print non-space charcters
            prev_was_space = 0; //reset flag
        }
    }
    return 0;
}
