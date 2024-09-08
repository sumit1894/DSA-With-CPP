#include <bits/stdc++.h>
using namespace std;

void DecimalBinary(int decNum)
{
int ans = 0,pow = 1;

while(decNum>0){
    int rem=decNum%2;
    decNum/=2;
    ans+=(rem*pow);
    pow*=10;
}
cout<<"Binary Number: "<<ans<<endl;
}

void BinarDecimal(int binNum){
int ans = 0,pow = 1;

    while(binNum>0){
        int rem=binNum%10;
        binNum/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    cout<<"Decimal Number: "<<ans<<endl;

}

int main()
{

    DecimalBinary(50);

    BinarDecimal(110010); 

    return 0;
}