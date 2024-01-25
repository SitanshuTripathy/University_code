#include<stdio.h>
int min;
void nonzero(int m[][30],int n){
int count=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(m[i][j] != 0)
count++;
}
}
printf("\nNo of non zero elements : %d", count);
}

void sum(int m[][30],int n){
    int d=0;
    for(int i=0;i<n;++i)
for(int j=0;j<n;++j)
{
if(j>i)
d=d+m[i][j];}
printf("\nSum of elements above the diagonal=%d",d);
}

void display(int m[][30],int n){
    printf("\nThe below elements:");
     for(int i=0;i<n;++i){
for(int j=0;j<n;++j)
{
    if (j<i)
    printf("%d ",m[i][j]);
    
}printf("\n");}
}

void prd(int m[][30],int n){
    int pro=1;
     for(int i=0;i<n;++i){
for(int j=0;j<n;++j)
{
    if (j==i)
   pro=pro*m[i][j];
    }}
    printf("The product = %d",pro);
}
int main(){
int mat[30][30],n;int mn;
printf("Enter the value for nxn :");
scanf("%d",&n);
printf("Enter the matrix :\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          
            scanf("%d", &mat[i][j]);
        }
    }
    nonzero(mat,n);
    sum(mat,n);
    display(mat,n);
    prd(mat,n);
return 0;
}