#include <iostream>
using namespace std;
int main(){ 
  int i,j,matrix[50][50],m,n;
  cout<<"enter the row m "<<endl;
  cin>>m;
    cout<<"enter the column n "<<endl;
  cin>>n;
    cout<<"enter the elemnts of m x n matrix "<<endl;
for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin>>matrix[i][j];
		}
        cout<<endl;
        
	}
    int sum=0;
    for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			
			if (i == j) {
				sum += matrix[i][j];
			}
		}
	}
    cout<<"The sum is"<<sum;
return 0;
}