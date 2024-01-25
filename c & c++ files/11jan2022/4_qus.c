#include<stdio.h>
void dis(int b[][4]);
int main(){
int a[3][4]={
              {1,2,3,4},
              {5,6,7,8},
              {1,4,6,9}
             };
    dis(a);         
return 0;
}
void dis(int b[][4]){
    int i,j;
    for(i=0;i<3;i++){
        printf("\n");
     for(j=0;j<4;j++)
    printf("%d ",b[i][j]);
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
      {
          if(b[0][0]<b[i][j])
          {
              b[0][0]=b[i][j];
          }
      }
    }
      printf("\nThe largest number in the array:%d",b[0][0]);
}