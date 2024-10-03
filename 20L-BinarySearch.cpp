#include<bits/stdc++.h>
using namespace std;

int LinearSearchSingleElement(vector<int> &arr){
    for (int i = 1; i < arr.size()-1; i++)
    {
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
    return -1; // Return -1 if no single element is found
}


int SingleElement(vector<int> &arr){
    int n=arr.size();
    int st=1;
    int end=n-1;
    if(n==1) return arr[0];

    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && arr[0]!=arr[1]){
            return arr[mid];
        }
        if(mid==(n-1) && arr[n-1]!=arr[n-2]){
            return arr[mid];
        }

        if(arr[mid-1] != arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }

        if(mid%2==0){//even
            if(arr[mid]==arr[mid+1]){//right
                st=mid+2;
            }
            else{//left
                end=mid-1;
            }
        }
        else{//odd
            if(arr[mid]==arr[mid-1]){//right
                st=mid+1;
            }
            else{//left
                end=mid-1;
            }
        }
    }
    return -1;

}


int main(){

cout<<"--------------Single Element in Sorted Array--------------"<<endl<<endl;

vector<int> arr={1,1,2,3,3,4,4,8,8};
int ans=LinearSearchSingleElement(arr);
cout<<"Single Element in the array is: "<<ans<<endl;


cout<<endl<<"----------------------------------------------------------"<<endl;


vector<int> arr1={3,3,7,7,10,11,11};
int ans2=SingleElement(arr1);
cout<<"Single Element in the array is: "<<ans2<<endl;


    return 0;
}