#include <stdio.h>

int main() {
   
 
 unsigned int num,a,b,c,d;
 scanf("%u",&num);
  
    a = (num >> 24) & 0xFF;
     b = (num >> 16) & 0xFF;
     c= (num >> 8) & 0xFF;
    d= num & 0xFF;

    printf("a: %u\n", a);
    printf("b: %u\n", b);
    printf("c: %u\n", c);
    printf("d: %u\n", d);

    return 0;
} 