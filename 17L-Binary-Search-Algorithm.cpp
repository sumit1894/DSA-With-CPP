#include <bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> arr, int target)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
    }
    return -1;
}

// BS-Recursion 

int Binary_Search_Recursion(vector<int> arr3, int target3, int start, int end)
{
    if (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr3[mid] > target3)
        {
            return Binary_Search_Recursion(arr3, target3, start, mid - 1);
        }
        else if (arr3[mid] < target3)
        {
            return Binary_Search_Recursion(arr3, target3, mid + 1, end);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    cout << "-------------Binary Search Algorithm---------------" << endl<< endl;


    cout<<"binary_search() function is used to search an element in a sorted array."<<endl<<endl;

    // It returns true if the element is found, else false.


    cout << "------------------BS Odd------------------" << endl<< endl;


    vector<int> arr1 = {-1, 0, 3, 5, 9, 12}; // odd array 0+(0+5)/2=2
    int target1 = 9;

    int result = Binary_Search(arr1, target1); // 
    cout << "Element found at index: " << result << endl<< endl;



    cout << "------------------BS Even------------------" << endl<< endl;



    vector<int> arr2 = {-1, 0, 3, 5, 9, 12, 15}; // even array 0+(0+6)/2=3
    int target2 = 9;
    int result2 = Binary_Search(arr2, target2);
    cout << "Element found at index: " << result2 << endl<< endl;



    cout << "------------------BS Recursion------------------" << endl<< endl;



    vector<int> arr3 = {-1, 0, 3, 5, 9, 12, 15}; // even array 0+(0+6)/2=3
    int target3 = 0;
   
    cout<<"Element index: "<<Binary_Search_Recursion(arr3, target3, 0, arr3.size()-1)<<endl;


    

    return 0;
}