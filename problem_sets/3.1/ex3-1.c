int binsearch(int x, int v[], int n) {
    int low = 0, high = n-1, mid;

    while (low <= high) {
        int mid = (low + high) / 2;

        if  (x < v[mid])
            high = mid - 1;
        if (x > v[mid])
            low = mid + 1;
        if (x == v[mid])
            return mid;
    }

    return -1;
}

#include <stdio.h>

int main() {
    int v[] = {10, 20, 30, 40, 50};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Search 10: %d\n", binsearch(10, v, n));
    printf("Search 30: %d\n", binsearch(30, v, n));
    printf("Search 50: %d\n", binsearch(50, v, n));
    printf("Search 25: %d\n", binsearch(25, v, n));
    printf("Search 60: %d\n", binsearch(60, v, n));
    printf("Search 5 : %d\n", binsearch(5, v, n));

    int empty[] = {};
    printf("Search in empty: %d\n", binsearch(10, empty, 0));

    int single[] = {42};
    printf("Search 42 in single: %d\n", binsearch(42, single, 1));
    printf("Search 10 in single: %d\n", binsearch(10, single, 1));

    int dupes[] = {5, 10, 10, 10, 20};
    int dupes_n = sizeof(dupes) / sizeof(dupes[0]);
    printf("Search 10 in dupes: %d\n", binsearch(10, dupes, dupes_n));

    return 0;
}
