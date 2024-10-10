#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedValue)
{ // O(n)
    int cow = 1;
    int lastStallPos = arr[0];

    for (int i = 1; i < N; i++)
    {
        if (arr[i] - lastStallPos >= minAllowedValue)
        {
            cow++;
            lastStallPos = arr[i];
        }
        if (cow == C)
        {
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &arr, int N, int C)
{

    sort(arr.begin(), arr.end()); // N(logN)
    int st = 1;
    int end = arr[N - 1] - arr[0];
    int ans = -1;

    while (st <= end) //O(log(Range))*O(n)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, N, C, mid))
        { // right
            ans = mid;
            st = mid + 1;
        }
        else
        { // left
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    //!  Aggressive Cows Problem

    int N = 5;
    int C = 3;

    vector<int> arr = {1, 2, 8, 4, 9};
    cout << getDistance(arr, N, C) << endl;

    return 0;
}