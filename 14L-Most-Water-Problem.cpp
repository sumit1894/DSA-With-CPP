#include <bits/stdc++.h>
using namespace std;

int BruteMostWAter(int height[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++){
            int w=j-i;
            int h=min(height[i],height[j]);
            int area = h*w;
            ans=max(ans,area);
        }
    }
    return ans;
    
}



int OptimalMostWater(int height[],int n){
    
    int ans=0;
    int left=0;
    int right=n-1;
    for (int i = 0; i < n; i++)
    {
        while (left<right)
        {
            int width=right-left;
            int ht = min(height[left],height[right]);
            int currArea=width*ht;
            ans=max(ans,currArea);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }

            

        }
        return ans;
        
    }
    


    return ans;
}






int main(){


int height[]={1,8,6,2,5,4,8,3,7};
int n=sizeof(height)/sizeof(height[0]);



cout<<"------------------------------Brute------------------------------"<<endl<<endl;

int result=BruteMostWAter(height,n);
cout<<"Result: "<<result<<endl;


cout<<"------------------------------Optimal Solution------------------------------"<<endl<<endl;

int result2=OptimalMostWater(height,n);
cout<<"Result: "<<result2<<endl;



    return 0;
}