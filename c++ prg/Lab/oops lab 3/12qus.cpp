#include <iostream>
using namespace std;
int main(){ 
 
    int i,j,matrix[3][3],trp[3][3];
for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin>>matrix[i][j];
		}cout<<endl;
	}
     for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            trp[i][j] = matrix[j][i];
}
int sum, multiply[20][20];
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          sum = sum + matrix[i][k]*trp[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    int flag=0;
     for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(i==j && multiply[i][j]!=1)
   flag=0;
   if(i!=j && multiply[i][j]!=0)
   flag=0;
  }
 }
 if(flag==1)
 {
  cout<<"Given Matrix is Orthogonal Matrix";
 }
 else
 {
  cout<<"Given Matrix is not an Orthogonal Matrix";
 }

return 0;
}