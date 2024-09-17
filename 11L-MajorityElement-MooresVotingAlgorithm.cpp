#include<bits/stdc++.h>
using namespace std;

vector<int> PairSum( vector<int>pairArr, int target){

vector<int> ans;
int n=pairArr.size();

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(pairArr[i]+pairArr[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
return ans;
};


vector<int> brutePairSum( vector<int>pairArr, int target){
    int n=pairArr.size();
    vector<int> bruteAns;
    int i=0;
    int j=n-1;

    while(i<j){
        if(pairArr[i]+pairArr[j]==target){
            bruteAns.push_back(i);
            bruteAns.push_back(j);
            return bruteAns;
        }
        else if(pairArr[i]+pairArr[j]<target){
            i++;
        }
        else{
            j--;
        }
}
    return bruteAns;
};


int MajorityElementBrute( vector<int>MajorityElementArr){

int n=MajorityElementArr.size();
int count=0;
vector<int> ans;

for (int i = 0; i < n; i++) 
{
    for(int j=0; j<n; j++){
        if(MajorityElementArr[i]==MajorityElementArr[j]){
            count++;
        }
    }
    if(count>n/2){
        return MajorityElementArr[i];
    }
    
}
return -1;
};
    

int MajorityElementBetter( vector<int>MajorityElementArr){

int n=MajorityElementArr.size();
sort(MajorityElementArr.begin(),MajorityElementArr.end());// O(nlogn)

int count=1;
int ans=MajorityElementArr[0]; 

for (int i = 1; i < n; i++)
{
    if(MajorityElementArr[i]==MajorityElementArr[i-1]){
        count++;
    }
    else{
        count=1;
        ans=MajorityElementArr[i];
    }
    if(count>n/2){
        return ans;
    }
}
};


int MajorityElementMoore( vector<int>MajorityElementArr){
    int n=MajorityElementArr.size();
    int count=0;
    int ans;

    for(int i = 0; i < n; i++)//1,2,2,1,1
    {
        if(count==0){
            ans=MajorityElementArr[i];
        }
        if(ans==MajorityElementArr[i]){
            count++;
        }
        else{
            count--;
    }

    int c=0;
    for(int value: MajorityElementArr){
        if(value==ans){
            c++;
        }
    }
    if(c>n/2){
        return ans;
    }
    }
    return -1;
};


int main(){
cout<<endl;

cout<<"------------------------PairSum------------------------"<<endl<<endl;

cout<<"Return pair in shorted array with the targete sum"<<endl;
cout<<"Time Complexity is O(n^2) and Space Complexity is O(1)"<<endl;

int target=26;
vector<int> pairArr={2,7,11,15};
vector<int> ans=PairSum(pairArr,target);
cout<<"Pair with sum "<<target<<" is: "<<ans[0]<<" and "<<ans[1]<<endl<<endl;





cout<<"------------------------ Brute-Approach------------------------"<<endl<<endl;
cout<<"time complexity is O(n) and space complexity is O(1)"<<endl;

int BruteTarget=26;
vector<int> brutePairArr={2,7,11,15};
vector<int> bruteAns=brutePairSum(brutePairArr,BruteTarget);
cout<<bruteAns[0]<<" and "<<bruteAns[1]<<endl<<endl;




cout<<"------------------------MajorityElemet------------------------"<<endl;
cout<<"------------------------ Brute-Approach------------------------"<<endl<<endl;
cout<<"Time Complexity is O(n^2) and Space Complexity is O(1)"<<endl;

vector<int> majorityElementArr1={1,2,2,1,1};
int majorityElement1=MajorityElementBrute(majorityElementArr1);
cout<<"Majority Element is: "<<majorityElement1<<endl<<endl;






cout<<"------------------------ Better-Approach------------------------"<<endl<<endl;
cout<<"Time Complexity is O(nlogn)for short and 0(n) for loop and Space Complexity is O(1)"<<endl;

vector<int> majorityElementArr2={1,2,2,1,1};
int majorityElement2=MajorityElementBetter(majorityElementArr2);
cout<<"Majority Element is: "<<majorityElement2<<endl<<endl;





cout<<"------------------------ Moore's Voting------------------------"<<endl<<endl;
cout<<"Time Complexity is O(n) and Space Complexity is O(1)"<<endl;

vector<int> majorityElementArr3={1,2,2,1,1};
int majorityElement3=MajorityElementMoore(majorityElementArr3);
cout<<"Majority Element is: "<<majorityElement3<<endl<<endl;





    return 0;
}