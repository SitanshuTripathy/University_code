#include <stdio.h> 
#include<string.h> 
typedef unsigned char BYTE;
int main ()
{
    unsigned int x=0x11223344;
     BYTE a,b,c,d;
      a=(x&0xFF);
      b=((x>>8)&0xFF); 
      c=((x>>16)&0xFF); 
      d=((x>>24)&0xFF); 
      char *ch =(char*) &x;
       int t=(int) *ch; 
       printf ("\n*ch is: 0x%x\n", *ch);
       if (t == d)
       {
         printf("Computer is little endian. \n");
         printf("Converted value = 0x%X%X%X%X\n",d,c,b,a);
} 
else if(t==a)
{ printf ("Computer is big endian. \n");
printf("Converted value = 0x%X%X%X%X\n",d,c,b,a);}
return 0;
}