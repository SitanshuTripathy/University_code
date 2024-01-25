//sitanshu
#include <iostream>
using namespace std;
int main(){ 
int m, n, p, q, c, d, k, sum = 0;
  int a[10][10], b[10][10], x[10][10];
 
  cout<<"Enter number of rows and columns of a matrix\n";
  cin>> m>> n;
  cout<<"\nEnter elements of a matrix\n";
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      cin>>a[c][d];
 
  cout<<"Enter number of rows and columns of b matrix\n";
  cin>>p>>q;
 
  if (n != p)
    cout<<"\nThe multiplication isn't possible.\n";
  else
  {
    cout<<"\nEnter elements of b matrix\n";
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        cin>>b[c][d];
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + a[c][k]*b[k][d];
        }
 
        x[c][d] = sum;
        sum = 0;
      }
    }
 
    cout<<"\nProduct of the matrices:\n";
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        cout<< x[c][d];
        cout<<endl;
    } 
 }
return 0;
}