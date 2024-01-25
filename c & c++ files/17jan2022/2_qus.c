#include<stdio.h>
int dis(int n);
int main(){
    dis(10) ;
return 0;
}
int dis(int n){
    printf("%d ",n);

    if(n>2){
        dis(n-2);
    }
}