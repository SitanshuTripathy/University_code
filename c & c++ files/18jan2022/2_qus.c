#include<stdio.h>

typedef struct 
{ int dd;
 int mm;
 int yy;
   }date;
  void f1( date x, date y); 
int main(){
date d1,d2;
printf("Enter the 1st date:");
scanf("%d/%d/%d",&d1.dd,&d1.mm,&d1.yy);
 
printf("Enter the 2nd date:");
scanf("%d/%d/%d",&d2.dd,&d2.mm,&d2.yy);
f1(d1,d2);
return 0;
}
void f1( date x, date y){
      if(x.yy==y.yy)
    {
        if(x.mm==y.mm)
        {
            if(x.dd<y.dd)
            {
                printf("First date is earlier");
            }
            
            else
            {
                printf("Second date is earlier");
            }
        }
        
        else
        {
            if(x.mm<y.mm)
            {
                printf("First date is earlier");
            }
            
            else
            {
                printf("Second date is earlier");
            }
        }
    }
        
    else
    {
            if(x.yy<y.yy)
            {
                printf("First date is earlier");
            }
            else
            {
                printf("Second date is earlier");
            }
    }
}
