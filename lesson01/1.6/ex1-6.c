#include <stdio.h>

int main () {
    int c, i;
    int ndigit[10]; //an array of 10 integers, one for each of digit 0-9

    // init array
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    // read char until EOF
    while ((c = getchar())  != EOF) {
        if (c >= '0' && c <= '9') // if its a digit char
            ++ndigit[c - '0'];  // increment the corresponding slot
    }

    //print results
    for (i = 0; i < 10; ++i)
        printf("%d: %d\n" , i, ndigit[i]);

    return 0;
}
