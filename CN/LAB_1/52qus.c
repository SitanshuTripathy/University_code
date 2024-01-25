#include <stdio.h>
#include <stdint.h>
typedef unsigned int unit32_t;
int main()
{
    union {
        uint32_t i;
        char c[4];
    } e = {0x12345678};

  
    if (e.c[0] == 1) {
        printf("Big endian\\n");
    } else {
        printf("Little endian\\n");
    }

 
    uint32_t num;
    printf("\nEnter a number: ");
    scanf("%u", &num);

 
    printf("Byte 0: %u\n", (num >> 24) & 0xFF);
    printf("Byte 1: %u\n", (num >> 16) & 0xFF);
    printf("Byte 2: %u\n", (num >> 8) & 0xFF);
    printf("Byte 3: %u\n", num & 0xFF);

    
    uint32_t converted_num = ((num >> 24) & 0xFF) |
                             ((num << 8) & 0xFF0000) |
                             ((num >> 8) & 0xFF00) |
                             ((num << 24) & 0xFF000000);
    printf("Converted number: %u\n", converted_num);

    return 0;
}
