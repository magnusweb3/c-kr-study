#include <stdio.h>

void add_one(int x) {
    x = x + 1;
    printf("inside function: x = %d\n", x);

}

int main() {
    int a = 5;
    add_one(a);
    printf("after function: a = %d\n", a);
    return 0;
}
