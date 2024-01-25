#include<stdio.h>
void dis(int b){
    int n;
    n=b%10;
    if(b==0)
      return;
     printf("%d ",n); //reverse
     dis(b/10);
     printf("\n");
     printf("%d ",n);
   
}

int main()
{
int a;
scanf("%d",&a);
dis(a);
return 0;
}
