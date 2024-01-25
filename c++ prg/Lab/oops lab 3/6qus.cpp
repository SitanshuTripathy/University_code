#include <iostream>
using namespace std;
int main(){ 
 int n;
    long fact = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;
       for(int i = 1; i <= n; ++i) {
            fact =fact* i;
        }
        cout << "Factorial of " << n << " = " << fact;    

return 0;
}