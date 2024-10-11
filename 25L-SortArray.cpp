#include <bits/stdc++.h>
using namespace std;

void burateSort(int *arr, int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void OptimizeSort(int *arr, int n){ //O(n) + O(n) = O(2n) = O(n)

    int val0 = 0, val1 = 0, val2 = 0;

    for (int i = 0; i < n; i++) //O(n)
    {
        if(arr[i]==0){
            val0++;
        }
        else if(arr[i]==1){
            val1++;
        }
        else{
            val2++;
        }
    }

    int index = 0;

    //O(n)
    for (int i = 0; i <val0; i++)
    {
     arr[index++] = 0;   
    }
    for (int i = 0; i <val1; i++)
    {
     arr[index++] = 1;   
    }
    for (int i = 0; i <val2; i++)
    {
     arr[index++] = 2;   
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

void OptimalSort(int *arr, int n){ 
    int low = 0, mid = 0, high = n-1;

    while (mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid ++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

     
}


int main()
{

    //! Sort an Array of 0s, 1s & 2s

    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    //* burate force approach
    burateSort(arr, n);

    cout<<endl;
    cout<<endl;

    //* Optimize approach
    OptimizeSort(arr, n);

    cout<<endl;
    cout<<endl;

    //* Optimal approach
    //? Dutch National Flag Algorithm OR 3-way Partitioning
    OptimalSort(arr, n); 

    return 0;
}