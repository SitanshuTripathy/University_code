//sitanshu
#include <iostream>
using namespace std;
int main(){ 
 int a[30][40],n,m;
    int b[30][40];
    int c[30][40];

    cout<<"Enter the value for nxm";cin>>n>>m;
    cout<<"Enter the values for 1st Matrix A"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           
            cin>>a[i][j];
        }
    }

    cout<<"\nEnter the values for 2nd Matrix A"<<endl;
     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            
            cin>>b[i][j];
        }
    }

    cout<<("The result of summation of both the matrix is\n");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++){
        c[i][j] = a[i][j] +b [i][j];
     }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    
return 0;
}