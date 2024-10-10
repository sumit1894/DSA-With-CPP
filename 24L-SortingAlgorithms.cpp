#include <bits/stdc++.h>
using namespace std;

//! Bubble Sort

void BubbleSort(int *arr, int n)
{ // O(n^2)
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            return;
        }
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//! Selection Sort

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int SmallestIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[SmallestIndex]){
                SmallestIndex = j;
            }
        }
        swap(arr[i], arr[SmallestIndex]);
        
    }
}
void S_print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//! Insertion Sort

void InsertionSort(int *arr, int n){
    for (int i = 1; i < n; i++)
    {
        int curr=arr[i];
        int prev = i-1;

        while (prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]==curr;//placing the element at the correct position   
    } 
}
void I_print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    //! Bubble Sort

    BubbleSort(arr, n);
    print(arr, n);

    //! Selection Sort

    SelectionSort(arr, n);
    S_print(arr, n);

    //! Insertion Sort

    InsertionSort(arr, n);
    I_print(arr, n);


    return 0;
}