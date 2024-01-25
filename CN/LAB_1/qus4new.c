#include<stdio.h>
#include<stdlib.h>
struct pkt{
char ch1;
char ch2[2];
char ch3;
};  


int main(){
 struct pkt p;
 unsigned int num;
 scanf("%u",&num);
  
     p.ch1 = (num >> 24) & 0xFF;
    p.ch2[0] = (num >> 16) & 0xFF;
    p.ch2[1] = (num >> 8) & 0xFF;
    p.ch3 = num & 0xFF;

printf("ch1= %d ch2[0]= %d  ch2[1]= %d  ch3= %d\n ",p.ch1,p.ch2[0],p.ch2[1],p.ch3);
 
int orgnum;
orgnum|=(p.ch1)<<24;
orgnum|=(p.ch2[0])<<16;
orgnum|=(p.ch2[1])<<8;
orgnum|=(p.ch3);
printf(" original num= %d",orgnum);

    return 0;
}