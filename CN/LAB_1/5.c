#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>
typedef unsigned int unit32_t;
int main(){
 union {
        uint32_t i;
        char c[4];
    } e = {0x12345678};

  
    if (e.c[0] == 1) {
        printf("Big endian\\n");
    } else {
        printf("Little endian\\n");
    }
    int value = 0x11223344;
    int converted = 0;
    
    printf("Value Before Converting = 0x%x\n", value);
    
    converted |= ((0xff & value) << 24);
    converted |= (((0xff << 8) & value) <<8);
    converted |= (((0xff << 16) & value) >> 8);
    converted |= (((0xff << 24) & value) >> 24);
    
    
    printf("Value After Converting = 0x%x\n", converted);
return 0;
}