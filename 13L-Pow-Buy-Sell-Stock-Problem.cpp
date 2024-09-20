#include<bits/stdc++.h>
using namespace std;

double BinaryExponentiation(int x,int n){

    if(n==0){return 1.0;}//x^0=1
    if(x==0){return 0.0;}//x^1=x
    if(x==1){return 1.0;}//x^1=x
    if(x==-1 && n%2==0){return 1.0;}//(-1)^2=1 }
    if(x==-1 && n%2!=0){return -1.0;}//(-1)^3=-1 }

    long binForm=n;//binary form of n -->5-->101

    if(n<0){
        x=1/x;
        binForm=-binForm;
    }
    double ans=1;

    while(binForm>0){

        if(binForm%2==1){

            ans=ans*x;
        }
        x=x*x;
        binForm=binForm/2;
    }
    return ans;

}


int buySellStock(int prices[],int n){ //prices={7,1,5,3,6,4}
    int maxprofit=0;
    int bestBuy=prices[0];

    for(int i=0; i<n; i++){
        if(prices[i]>bestBuy){
            maxprofit=max(maxprofit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxprofit;

}


int main(){
cout<<"Compute(x^n)"<<endl;
cout<<"binary exponentiation"<<endl;

//note:- 
// -->  binary form of n is log to the base 2 of n +1===>log2(n)+1
// the number of times bits used to represent n that times we have to multiply the number x with itself to get the result.

//  Example :-x= 3 and n=5 --> x^n=3^5=243



double result=BinaryExponentiation(3,5);
cout<<"Result="<<result<<endl<<endl;


cout<<"---------------------------------Buy and Sell Stock----------------65"<<endl<<endl;

//Buy and Sell Stock Problem
int prices[]={7,1,5,3,6,4};
int n=sizeof(prices)/sizeof(prices[0]);
int output=buySellStock(prices,n);
cout<<"Max Profit= "<<output<<endl;



    return 0;
}