#include<bits/stdc++.h>
using namespace std;

int maxSumVectorarr(vector<int> &arrNthV){
int currSumv=0;
int maxSumv=INT_MIN;

for(int value:arrNthV){
    currSumv+=value;
    maxSumv=max(currSumv,maxSumv);

    if(currSumv<0){
        currSumv=0;
    }
}
return maxSumv;

};

int main(){
    
    cout<<"------------------------Kadane's Algorithm--------------------22"<<endl<<endl;
    //time complexity is O(n^3) and space complexity is O(1)
    


    int n=5;
    int arr[n]={1,2,3,4,5};

    for(int st=0; st<n; st++){
        for(int en=st; en<n; en++){
            for(int i=st; i<=en; i++){
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;



    cout<<"-------------------Maximum Subarray Sum-----------------42"<<endl<<endl;
    //time complexity is O(n^2) and space complexity is O(1)

    cout<<"brute force approach"<<endl<<endl;

    int nth=7;
    int arrSum[7]={3,-4,5,4,-1,7,-8};
    int maxSum=0;

    for(int st=0; st<nth; st++){
        int currSum=0;
        for(int end=st; end<nth; end++){
           currSum+=arrSum[end];
            maxSum=max(currSum,maxSum);
        } 
    }
cout<<"Maximum Subarray Sum is "<<maxSum<<endl<<endl;



cout<<"----------------maxSum Using Kadane's Algorithm---------------63"<<endl<<endl;

//time complexity is O(n) and space complexity is O(1)


int nthKadane=7;

int arrKadane[7]={3,-4,5,4,-1,7,-8};
int currSumKadane=0;
int maxSumKadane=INT_MIN;

for(int i=0; i<nthKadane; i++){

currSumKadane+=arrKadane[i];
maxSumKadane=max(currSumKadane,maxSumKadane);

if(currSumKadane<0){
    currSumKadane=0;
    }
}
cout<<"Maximum Subarray Sum is "<<maxSumKadane<<endl<<endl;



cout<<"----------------maxSum Using Kadane's Algorithm-Vector----------87"<<endl<<endl;
//time complexity is O(n) and space complexity is O(n)

vector<int> arrNthV ={3,-4,5,4,-1,7,-8};

cout<<"Maximum Subarray Sum is "<<maxSumVectorarr(arrNthV)<<endl<<endl;


    return 0;
}