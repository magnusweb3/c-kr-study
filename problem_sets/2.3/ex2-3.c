#include <stdio.h>

int htoi(char s[]) {
    int i = 0;
    int result = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    char c;
    while ((c = s[i])   != '\0') {
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F' ) {
            digit = c - 'A' + 10;
    } else {
            printf("Invalid hex digit: %c\n", c);
            return -1;
        }

        result = result * 16 + digit;
        ++i;
        }

        return result;
    }

    int main() {
        printf("0x2F = %d\n", htoi("0x2F"));   // should print 47
        printf("a1 = %d\n", htoi("a1"));       // should print 161
        printf("0X10 = %d\n", htoi("0X10"));   // should print 16
        return 0;
    }
