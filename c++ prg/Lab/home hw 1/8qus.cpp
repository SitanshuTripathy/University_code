//sitanshu
#include <iostream>
using namespace std;
int main(){ 
 int a[30][40],n,m,sum=0;
    

    cout<<"Enter the value for nxm ";cin>>n>>m;
    cout<<"Enter the values for 1st Matrix A"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           
            cin>>a[i][j];
        }
    }

 
  for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
     
        sum+=a[i][j];
      
 }}
  cout<<"\nsum of elements = "<<sum;
   

return 0;
}