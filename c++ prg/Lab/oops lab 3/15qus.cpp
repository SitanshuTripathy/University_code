#include <iostream>
using namespace std;
int main(){

    int i,j,matrix[3][3],mtr[3][3],count=0;

    cout<<"Enter the elemnts of matrix1 :"<<endl;
for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin>>matrix[i][j];
		}cout<<endl;
	}
      cout<<"Enter the elemnts of matrix2 :"<<endl;
   for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin>>mtr[i][j];
		}cout<<endl;
    }
int sum, multiply[20][20];
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          sum = sum + matrix[i][k]*mtr[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    cout<<"The product:"<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<multiply[i][j];}
            cout<<endl;
}

return 0;
}