#include <stdio.h>
#include <stdbool.h>

bool isLittleEndian() {
    int num = 1;
    char *ptr = (char *)&num;
    return (*ptr == 1);
}

int swapEndianness(int num) {
    return ((num >> 24) & 0xFF) | ((num >> 8) & 0xFF00) | ((num << 8) & 0xFF0000) | ((num << 24) & 0xFF000000);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("\nMemory Representation:\n");
    printf("Address      ->       Value\n");
    char *ptr_le = (char *)&num;
    for (int i = 0; i < sizeof(num); i++) {
        printf("%lu  :      %u\n", (unsigned long)(ptr_le + i), *(ptr_le + i) & 0xFF);
    }

    if (isLittleEndian()) {
        printf("\nThe LSB of number is stored in lowest memory address\nHence,the host machine is little endian.");
    } else {
        printf("\nHost machine is Big Endian.\n");
    }
    printf("\n\nThe Number is converted to big endian now\n");
    int num_be = swapEndianness(num);
    printf("\nMemory Representation:\n");
    printf("Address      ->       Value\n");
    char *ptr_be = (char *)&num_be;
    for (int i = 0; i < sizeof(num_be); i++) {
        printf("%lu  :      %hhu\n", (unsigned long)(ptr_be + i), *(ptr_be + i) & 0xFF);
    }
    printf("\nThe number in big endian format is: %d\n", num_be);
    return 0;
}