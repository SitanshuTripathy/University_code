#include <iostream>
using namespace std;
void displayChar(char x = '*', int n = 80) {
    for (int i = 0; i < n; i++) {
        cout << x;
    }
    cout<<endl;
}
int main() {
    displayChar();
    displayChar('&');
    displayChar('+', 10);
    return 0;
}