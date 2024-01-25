#include<stdio.h>
void dis(char *b);
int main(){
char a[10];
scanf("%s",a);
dis(a);
return 0;
}
void dis(char *b){
    if(*b=='\0')
    {
    return ;
    }
    else{
    dis(b+1);
  printf("%c",b[0]);
    }
}