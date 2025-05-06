#include <stdio.h>

int main() {
    // read input character using get char ()
    // stop on EOF
    // is it a tab print \\t
    // is it a backspace print \\b
    // is it a backslash print \\\\
    // otherwise print char normally

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }else if (c == '\b') {
            printf("\\b");
        }else if (c =='\\') {
           printf("\\\\");
        }else {
            putchar(c);
        }
    }
    return 0;
}
