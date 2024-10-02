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




int main(){

cout<<"--------------Single Element in Sorted Array--------------"<<endl<<endl;

vector<int> arr={1,1,2,3,3,4,4,8,8};
// vector<int> arr={3,3,7,7,10,11,11};
int ans=LinearSearchSingleElement(arr);
cout<<"Single Element in the array is: "<<ans<<endl;


cout<<endl<<"----------------------------------------------------------"<<endl;


// int ans2=SingleElement(arr);
// cout<<"Single Element in the array is: "<<ans2<<endl;


    return 0;
}