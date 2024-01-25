#include<stdio.h>

union stu{
int a;
char b[2];
};
union stu no={259};
int main(){
no.b[0]=0;
printf("%d ",no.a);
return 0;
}