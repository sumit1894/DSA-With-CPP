#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m,int maxAllowedTime){ //O(n)  

    int painters=1;
    int time=0;
    for (int i = 0; i < n; i++)
    {
        if(time+arr[i]<=maxAllowedTime){
            time+arr[i];
        }else{
            painters++;
            time=arr[i];
        }
    }
    return painters<=m;

}


int minTimeToPaint(vector<int> &arr, int n, int m) //O(n)+O(log(sum))*O(n) = O(log(sum)*n)
{
    int maxVal = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++) //O(n)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal;
    int end = sum;
    int ans = -1;

    while (st <= end) //O(log(sum))
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr={40,20,10,30};
    int n=4;
    int m=2;
    cout<<minTimeToPaint(arr,n,m)<<endl;

    return 0;
}