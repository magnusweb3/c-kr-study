// static local keeps value between calls but visible only inside the func
// static global onlu visible in current file (not shared across .c files)
#include <stdio.h>

static int hidden = 42; // only visible in this file

void counter() {
    static int count = 0; //remembers its value
    count++;
    printf("count = %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
