#include<stdio.h>
void f1(int x[20],int n){
    int left=0,steps=0,i,t,right=n-1;
for ( i = 0; i <n; i++){
      while(x[left]%2==0)
   {
    left++;   steps++;
   }
   while(x[right]%2==1)
   {
    right--;   steps++;
   }
    if(left<right)
   {
     t=x[left];
    x[left]=x[right];
    x[right]=t;   steps++;
   }
   steps++;
}
printf("\nThe arranged array using fnc1:");
for ( i = 0; i < n; i++){
    printf(" %d",x[i]);   steps++;
}
printf("\nsteps1= %d",steps);
}
void f2(int y[20],int n){
    int i,j=n,t,stp=0;
    for ( i = 0; i <= j; i++)
{
   if (y[i]%2!=0)
   {
    while(j>i)
    {j--;
  if(y[j] % 2 == 0){  
    t = y[i];  
    y[i] = y[j];  
    y[j] = t;  
    break;  stp++;
    }  stp++;
    }stp++;
   }stp++;
   }
printf("\nThe array using functn2 :");
for(i=0;i<n;i++){
printf(" %d",y[i]);stp++;}
printf("\nthe step2:%d",stp);
}
int main(){
int n,a[20],i;
int steps=0;
printf("Enetr the size of array:");
scanf("%d",&n);
printf("\nEnter the elements of the array:");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
f1(a,n);
f2(a,n);
return 0;
}