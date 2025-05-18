#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};

    printf("a[2] = %d\n", a[2]);
    printf("*(a+2) = %d\n", *(a+2));

    int *p = a;

    printf("p[3] = %d\n", p[3]);
    printf("*(p+4) = %d\n", *(p+4));

    return 0;
}
