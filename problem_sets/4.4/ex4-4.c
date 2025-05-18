//this is a lesson on header files and their purpose

//math_utils.h
int square(int x);
int cube(int x);

//math utils.c
#include "math_utils.h"

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

//example main.c

#include <stdio.h>
#include "math_utils.h"

int main() {
    printf("5 squared = %d\n", square(5));
    printf("2 cubed = %d\n", cube(2));
    return 0;
}

// .h is what exists and .c is the actual code
// extern lets you share variables between files
// #include glues your files together
// include guards like #ifndef to prevent double inclusion
