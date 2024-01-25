#include <iostream>
using namespace std;
int main(){ 
 
    int matrix[3][3],trp[3][3],count=0;
for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin>>matrix[i][j];
		}
	}
     for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            trp[i][j] = matrix[j][i];
}

for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        if( trp[i][j] != matrix[j][i]){
               count++;
               break;
        }
}
if (count==1)
{
   cout<< "\nThe enter matrix is symmetric"<<endl;
}
else
{
  cout<< "\nThe enter matrix is not symmetric"<<endl;
}
  for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
          cout<<  trp[i][j];}
          cout<<endl;
  }
  cout<<endl;
  for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
          cout<< matrix[i][j];}
          cout<<endl;
  }
return 0;
}