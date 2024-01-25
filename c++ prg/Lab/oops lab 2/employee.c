#include<stdio.h>
struct employee
{
  char s[100];

  struct adrs
  {
    char adress[100];
    int pin;
  }add;
  };

int main(){
struct employee emp[100];

int n;
printf("Enter the no of employees:");
scanf("%d",&n);
for (int  i = 0; i < n; i++)
{
    printf("\nEnter the emp%d name :",i+1);
    scanf("%s",&emp[i].s);
     printf("\nEnter the city address:");
     scanf("%s",&emp[i].add.adress);
     printf("\nEnter the pin:");
     scanf("%d",&emp[i].add.pin);
}

for (int i = 0; i < n; i++)
{
    printf("\nThe emp%d name :%s",i+1,emp[i].s);
   
     printf("\nThe city address: %s",emp[i].add.adress);
  
     printf("\nThe pin:%d",emp[i].add.pin);
     
}


return 0;
}