//Qus2 Sitanshu

#include<stdio.h>
void f1(int x){
    int stp=0,c=0;
    for (int i = 1; i <= x; i++) {
      if (x % i == 0) {
         c++;
      }
      stp++;
  }

  if (c == 2) {
        printf("\n%d is a Prime number",x);stp++;
  }
  else {
         printf("\n%d is not a Prime number",x);stp++;
  }
  printf("\nthe step1=%d",stp);
}
void f2(int y){
    int flag=0 ,stp=0;
for(int i=2 ; i <= y/2 ; i++) {
      if(y%i == 0) {
         printf("\n%d is not a prime number", y);
         flag = 1;
         break;stp++;
      }
   }
   if(flag == 0) {
      printf("\n%d is a prime number", y);stp++;
   }
     printf("\nthe step2=%d",stp);
}
void f3(int z){
    int flag=0,stp=0,i;
   for( i = 2; i <= z/2; i++)
{
if(z % i ==0)
{
break;
}stp++;
}
if(i > z/2){
printf("\n%d is a Prime Number",z);stp++;}
else{
printf("\n%d is not a Prime Number", z);stp++;
}
printf("\nthe step3=%d",stp);

}
int main(){
int n;
for(int i=1;i<=10;i++){
  printf("\nEnter any number n:");
  scanf("%d", &n);
f1(n);
f2(n);
f3(n);
}
return 0;
}