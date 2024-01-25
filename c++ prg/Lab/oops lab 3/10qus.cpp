#include <iostream>
using namespace std;
int main(){ 
    int i,j,matrix[3][3];
for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin>>matrix[i][j];
		}
        cout<<endl;
        
	}
    int sum=0;
    for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			if (i != j) {
				sum += matrix[i][j];
			}
		}
	}
    cout<<"The sum is"<<sum;
return 0;
}