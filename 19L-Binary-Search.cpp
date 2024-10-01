#include <bits/stdc++.h>
using namespace std;

int PeakIndexMountainArray(vector<int>& arr, int n)
{
    // peakindex cannot be a start value and end value
    int st = 1;
    int end = n - 2;
    int mid;

    while (st <= end) {
        mid = st + (end - st) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> arr = {0, 3, 8, 9, 5, 2};
    int n = arr.size();
    int result=PeakIndexMountainArray(arr,n);
    cout<<result;

    return 0;
}