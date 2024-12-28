#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]:" ;
        cin >> a[i];
    }

    cout << "Original Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; // original array print
    }

    cout << endl;

    // print the array in reverse order
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    
    
    
}