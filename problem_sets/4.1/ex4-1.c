#include <stdio.h>

int square(int n);

int main() {
    printf("5 squared is : %d\n", square(5));
    return 0;
}

int square(int n) {
    return n * n;
}
