//sitanshu
#include <iostream>
using namespace std;
int main(){ 

 int a[30][40],n,m,tran[30][40];
    cout<<"Enter the value for nxm ";cin>>n>>m;
    cout<<"Enter the values for 1st Matrix A"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           
            cin>>a[i][j];
        }
    }
for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          tran[j][i]=a[i][j]; 
   
        }
    }
   cout<<"\nThe transpose"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           
            cout<<tran[i][j];
        }
        cout<<endl;
    } 
return 0;
}