#include <stdio.h>

unsigned rightrot(unsigned x, int n) {
    int bits = sizeof(x) * 8;
    n = n % bits;

    if (n == 0) return x;

    // Step 1: Extract rightmost n bits
    unsigned right = x & ((1 << n) - 1);

    // Step 2: Shift x right
    x = x >> n;

    // Step 3: Shift right bits to the left end
    right = right << (bits - n);

    // Step 4: Combine
    return x | right;
}

int main() {
    unsigned x = 150; // 10010110
    int n = 3;

    unsigned result = rightrot(x, n);

    printf("Original: %u\n", 150);
    printf("Rotated : %u\n", result);

    return 0;
}
