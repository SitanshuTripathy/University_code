#include<stdio.h>
void add(int *n);
int main(){
int num=2;
printf("\n The value of number before calling the functn=%d",num);
add(&num);
printf("\n The value of number after calling the functn=%d",num);
return 0;
}
void add(int *n){
    *n = *n+10;
    printf("\nThe value of num in the called function =%d", *n);

}
//call by ref