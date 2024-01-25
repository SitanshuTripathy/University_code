#include<stdio.h>
void dis(int *b);
int main(){
int a[5]={5,9,3,2,1};
dis(a);
return 0;
}
void dis(int *b){
    int i;
    for(i=0;i<5;i++)
    printf("%d ",b[i]);
    for (i=0; i < 5; ++i) {
    if (b[0] < b[i]) {
      b[0] = b[i];
    }
  }

  printf("Largest element = %d", b[0]);
}