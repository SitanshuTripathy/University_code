#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
int q[50];
void enqueue(int data ,int l){
if (r==l-1){
printf("\nThe queue is empty");
}
else if((f==-1)&&(r==-1)){
f=r=0;
q[r]=data;
}
else {
    r++;
    q[r]=data;
}}
void display(){
    printf("\nThe content of the queue are: ");
    for (int i=0;i<=r; i++){ 
      printf(" %d",q[i]);
      }
    }
void reverse(){
    int i,j,t;
    for ( i = f,j=r;i<j; i++,j--){
    t=q[i];
    q[i]=q[j];
    q[j]=t;
    }}
int main(){
int i=0,n,t;
printf("\nEnter the size of array :");
scanf("%d",&n);
printf("\nEnter the data of the queue:");
while(i<n){
scanf("%d",&t);
enqueue(t,n);
i++;
}
printf("\nThe original queue :");
display();
reverse();
printf("\nThe reverse queue :");
display();
return 0;
}