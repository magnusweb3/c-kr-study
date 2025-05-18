#include <stdio.h>

//Write a function setbits(x, p, n, y) that returns x
//with the n bits that begin at position p set to the rightmost
//n bits of y, leaving the other bits unchanged.

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    //step 1: get rightmost n bits from y
    unsigned ybits = y & ((1 << n) -1);

    //step 2: shift those bits to position p
    ybits = ybits << (p + 1 - n);

    //step 3: clear n bits at position p in x
    unsigned mask = ~(((1 << n) -1) << (p + 1 - n));
    x = x & mask;

    //step 4: insert y's bits into x
    return x | ybits;
}

int main() {
    unsigned x = 0b10110100;
    unsigned y = 0b00000111;
    int p = 4;
    int n = 3;

    unsigned result = setbits(x, p, n, y);
    printf("Result: %u\n", result);
    printf("Result (binary): %08b\n", result);

    return 0;
}
