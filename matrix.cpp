#include<iostream>
using namespace std;

int main()
{
    int row , col;

    cout << "Enter the rows of the array: " ;
    cin >> row;

    cout << "Enter the columns of the array:";
    cin >> col;

    cout << endl;
    
    int arr[row][col];
    int array[row][col];
    int total[row][col];

    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout << "arr[" << i << "] " << "[" << j << "] : " ;
            cin >> arr[i][j]; //taking data from the user
       }
       
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  "; //display the array
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout << "arr[" << i << "] " << "[" << j << "] : " ;
            cin >> array[i][j]; //taking data from the user
       }
       
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << "  "; //display the array
        }
        cout << endl;
    }

    cout << endl;

    if (row == col)
    {
        cout << "the addition of two arrays are : " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                total[i][j] = arr[i][j]+array[i][j]; // sum of matrix
                cout << total[i][j] << " "; // print matrix
            }
            cout << endl;
        }
        cout << endl;
    }
}