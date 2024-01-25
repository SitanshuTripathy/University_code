#include <iostream>
using namespace std;

void bubble(int* a, int n){
    if(n==0|| n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if (a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
        
    }
    bubble(a,n-1);
}
int main(){ 
int arr[5]={2,1,3,5,4};

bubble(arr,5);
for (int i = 0; i < 5; i++)
{
    cout<<arr[i];
}

return 0;
}