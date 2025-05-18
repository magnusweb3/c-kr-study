#include <stdio.h>

int main() {
    int x = 3;

    if (x==3)
        goto skip;

    printf("You wont see this\n");

    skip:
        printf("Jumped here using goto\n");

        return 0;
}
