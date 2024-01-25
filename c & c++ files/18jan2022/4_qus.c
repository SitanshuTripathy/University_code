#include<stdio.h>

typedef struct 
{
    char a[3];
    char b[3];
    char c[3];
}ans;
void f1(ans *x){
   printf("The character are are :\n");
    printf("%s\n",(*x).a);
     printf("%s\n",(*x).b);
      printf("%s\n",(*x).c);
}
int main(){
    ans p;
    printf("Enter for a:\n");
    scanf("%s",p.a);
    printf("Enter for b:\n");
    scanf("%s",p.b);
    printf("Enter for c:\n");
    scanf("%s",p.c);
    f1(&p);
    return 0;
}

