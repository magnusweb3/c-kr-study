#include <stdio.h>

int main() {
    int i = 0;

    printf("while:\n");
    while (i < 3) {
        printf("i = %d\n", i);
        i++;
    }

    printf("for:\n");
    for (int j = 0; j < 3; j++)
        printf("j = %d\n", j);

    printf("do-while:\n");
    int k = 0;
    do {
        printf("k = %d\n", k);
        k++;
    } while (k < 3);

    return 0;
}
