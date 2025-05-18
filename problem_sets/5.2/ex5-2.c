void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>
int main() {
    int x = 3, y = 7;
    swap(&x,&y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
