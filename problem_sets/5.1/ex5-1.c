#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("value of x: %d\n", x);      //10
    printf("address of x: %p\n", &x);   //memory address
    printf("pointer at p: %p\n", p);    //same address
    printf("value at p: %d\n", *p);    //10
    return 0;
}
