#include <iostream>

using namespace std;

void numb(int k)
{
    try
    {
        if (k == 0)
            throw k;
        else if (k > 0)
            throw 'p';
        else if (k < 0)
            throw 0.7;
        cout << "Try block ended" << endl;

    }
    catch (char g)
    {
        cout << "Catch for (k>0) called" << endl;
    }
    catch (int j)
    {    
        cout << "Catch for (k==0) called" << endl;
    }
    catch (double f)
    {
        cout << "Catch for (k<0) called" << endl;
    }
    catch (...)
    {
        cout << "Catch all called" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    numb(n);
}         