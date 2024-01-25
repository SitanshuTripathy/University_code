#include<stdio.h>
void dis(int *b);
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};

dis(a);
return 0;
}
void dis(int *b){
    for(int i=0;i<10;i++){
        if(*b==0){
            return;
        }
        else
        printf("%d ",b[i]);
    }
}