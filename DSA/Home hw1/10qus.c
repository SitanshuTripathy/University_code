#include<stdio.h>
#include<string.h>

int main(){
int a,flag=0,n, remainder,reversed,original,result;
printf("Enter a=");
scanf("%d",&a);
printf("Enter the optn=");
scanf("%d",&n);
switch (n)
{
case 1:
if (a%2==0)
printf("\na is even");
else
printf("a is odd");
break;
case 2:
if (a == 0 || a == 1)
    flag = 1;
    for ( int i = 2; i <= a / 2; ++i) {
     if (a % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number.", a);
  else
    printf("%d is not a prime number.", a);
    break;
case 3:
original=a;
 while (a != 0) {
        remainder = a % 10;
        reversed = reversed * 10 + remainder;
        a /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    break;
case 4:
 original = a;
       while (original != 0) {
         remainder = original % 10;
        result += remainder * remainder * remainder;
        original /= 10;
    }
   if (result == a)
        printf("%d is an Armstrong number.", a);
    else
        printf("%d is not an Armstrong number.", a);
        break;
default:
    break;
}
return 0;
}