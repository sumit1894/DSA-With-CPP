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

string convertTwoComplement(string binary){

    for (int i = 0; i < binary.length(); i++)
    {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    int n = binary.length();
    bool carry = true;

    for (int i =n-1; i >=0; i--)
    {
        if(binary[i]=='1' && carry){
            binary[i] = '0';
        }
        else if(binary[i]=='0' && carry){
            binary[i]='1';
            carry=false;
        }
    }
    
    if(carry){
        binary='1'+binary;
    }
    return binary;
}


int main()
{
    DecimalBinary(50);

    BinarDecimal(110010); 
    
    cout<<(convertTwoComplement("1011"));

    return 0;
}
