#include <stdio.h>

unsigned invert (unsigned x, int p, int n) {
    //create mask of n 1's
    unsigned mask = (1 << n) -1;

    //shift mask into position p
    mask = mask << (p + 1 - n);

    // XOR x with mask to flip target bits
    return x ^ mask;
}

int main() {
    unsigned x = 0b10110100;
    int p = 4;
    int n = 3;

    unsigned result = invert(x, p, n);

    printf("Original: %u\n", x);
    printf("Inverted: %u\n", result);

    return 0;
}
