#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &arr,int n,int m, int maxAllowedPages){
    int students=1;
    int pages =0;

    for (int i = 0; i < n; i++) //O(n)  //15,17,20
    {
        if(arr[i]>maxAllowedPages) return false;

        if(pages+arr[i]<=maxAllowedPages){
            pages+=arr[i];
        }
        else{
            students++;
            pages=arr[i];
        }
    } 
    return students>m?false:true;

}
int BookAllocation(vector<int> &arr, int n, int m){ //O(logN * n)
    if(n<m) return -1;

    int sum=0;
    for (int i = 0; i < n; i++)  //)(n)
    {
        sum+=arr[i];
    }

    int st=0;
    int end=sum;

    int ans=-1;

    while(st<=end){ //O(log(sum)) or O(logN)
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){//left      
            ans=mid;
            end=mid-1;
        }
        else{//right
            st=mid+1;
        }
    }
    return ans;
}

int main(){

cout<<"--------------Book Allocation--------------"<<endl<<endl;

// vector<int> arr={2,1,3,4};
vector<int> arr={15,17,20};
int n=3;
int m=2;
cout<<BookAllocation(arr,  n,  m);

    return 0;
}