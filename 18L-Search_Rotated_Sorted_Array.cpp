#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "-----------------Search in Rotated Sorted Array-----------------" << endl
         << endl;

    vector<int> array = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int start = 0;
    int end = array.size() - 1;
    int mid;

    while (start <= end)
    {

        mid = start + (end - start) / 2;

        if (array[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            break;
        };

        if (array[start] <= array[mid])
        {

            if (array[start] <= target && target <= array[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (array[mid] <= target && target <= array[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
};
