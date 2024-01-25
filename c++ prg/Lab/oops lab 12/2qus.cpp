#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    int a[MAX];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
        try
        {
            cout << "Enter the element: ";
            for (int i = 0; i < MAX; i++)
            {
            if (n > 0 && i < n)
            {
                
                cin >> a[i];
            }
            else
            {
                if (n < 0)
                    throw (n);
                else
                    throw(i);
                break;
            }
        }
    }
        catch (int k)
        {
            cout << "Entered data is out of bounds for the array"<<endl;
        }

}