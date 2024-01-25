#include <iostream>
using namespace std;

void merge(int *a,int s,int e){
   int mid=s+e/2;
 int n=mid-s+1;
 int m=e-mid;
   int *l=new int[n];
   int *r=new int[m];

   int k=s;
    for(int i=0;i<n;i++){
      l[i]=a[k++];
    }

   int k=mid+1;
    for(int i=0;i<m;i++){
      r[i]=a[k++];
    }
    
   int i=0;
   int j=0;
   int k=s;

   while (i<n&&j<m)
   {
    if ()
    {
      /* code */
    }
    
   }
   
   
}
void mergesort(int *arr,int s,int e){
  if(s>e){
    return;
  }
  int mid=s+e/2;
mergesort(arr,s,mid);
  mergesort(arr,mid+1,e);
  merge(arr,s,e);

}
int main(){ 
  int n;
  cin>>n;
 int *arr=new int(n) ;
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
    } 

mergesort(arr,0,n-1);
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
    } 
return 0;
}