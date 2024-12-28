#include <iostream>

using namespace std;

// merge two halves of the array 
void merge(int a[], int low, int mid, int high)
{

    int size = 0;
    int arr[high - low + 1]; // 5 - 0 + 1 = 6 // temporary array to store merged array
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j]) // left side element small hai to ye condition work karengi 
        {
            arr[size] = a[i];
            i++;
            size++;
        }
        else // right side element small hai to ye condition work karengi 
        {
            arr[size] = a[j]; 
            j++;
            size++;
        }
    }

    while (i <= mid) // Agar left side me koi elements bach gya ho 
    {
        arr[size] = a[i];
        i++;
        size++;
    }

    while (j <= high) // Agar right side me koi elements bach gya ho 
    {
        arr[size] = a[j];
        j++;
        size++;
    }
    
    for (int i = 0; i < size; i++) // Sorted elements ko original array me transfer kiya 
    {
        a[low + i] = arr[i];
    }
    
}

// divide the array 
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2; // calculate middle index 

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);

    }
    
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;  // 6

    int a[n];

    for (int i = 0; i < n; i++) // 4, 7, 2, 3, 9, 1
    {
        cout << "a[" << i <<"]: ";
        cin >> a[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    mergeSort(a, 0, n - 1); // call mergesort

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}