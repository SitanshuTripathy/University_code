#include <stdio.h>

int main() {
    int num = 0x12345678;
    char a, b, c, d;

    a = (num >> 24) & 0xFF;
    b = (num >> 16) & 0xFF;
    c = (num >> 8) & 0xFF;
    d = num & 0xFF;

    printf("a: %c\n", a);
    printf("b: %c\n", b);
    printf("c: %c\n", c);
    printf("d: %c\n", d);

    return 0;
} 