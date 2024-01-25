#include<stdio.h>

void uni(int a[10],int b[10],int n,int m){
     int i=0,j=0;
     printf("\nUnion:");
     while (i<n && j<m)
     { if(a[i]<b[j])
     printf(" %d",a[i++]);           
     else if (b[j]<a[i])
     printf(" %d",b[j++]);
     else{
     printf(" %d",b[j++]);
     i++;
     }
    }
     while (i<n)
     {printf(" %d",a[i++]); }
     while (j<m)
     {printf(" %d",b[j++]); }
}
void intsec(int a[10],int b[10],int n ,int m){
int i=0,j=0;
printf("\nintersection:");
while(i<n && j<m){
if(a[i]<b[j])
i++;
else if (b[j]<a[i])
j++;
else{
printf(" %d",a[i++]);
j++;
}
}
}
int main(){
int a[10],b[10],n,m,i,j;
printf("Enter no of ele in 1:");
scanf("%d",&n);
printf("\nEnter no of ele in 2:");
scanf("%d",&m);
printf("\nenter ele in1 ");
for ( i = 0; i < n; i++)
{scanf("%d",&a[i]);}
printf("\nenter ele in2 ");
for ( j = 0; j < m; j++)
{scanf("%d",&b[j]);}

uni(a,b,n,m);
intsec(a,b,n,m);
return 0;
}