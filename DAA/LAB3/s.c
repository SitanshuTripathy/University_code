#include<stdio.h>
#include<stdlib.h>
void insertion(int a[],int n){
   for (int i = 0; i < n; i++)
   {
  int key=a[i];
  int j=i-1;
while (key<a[j]&&j>=0)
{
    a[j+1]=a[j];
    --j;
}
a[j+1]=key;
   }
   
    
}
int main(){
int n;
scanf("%d",&n);
int a[n];
for (int i = 0; i < n; i++)
{
    a[i]=rand();

}
insertion(a,n);
for (int i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}

return 0;
}