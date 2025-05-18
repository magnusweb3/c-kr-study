#include <stdio.h>

int count = 0;

void add_one() {
    count++;
}

int main() {
    add_one();
    add_one();
    printf("count: %d\n", count);
    return 0;
}
