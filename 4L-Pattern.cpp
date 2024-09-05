#include <bits/stdc++.h>
using namespace std;
void pattern1Square(int n, int count = 1)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void Pattern2Triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern3Triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern4Triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern5ReverseTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Pattern6floydsTriangle(int n, int z = 1)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << z << " ";
            z++;
        }
        cout << endl;
    }
}

void Pattern7InvertedTriangle(int n, int cnt = 1)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << cnt << " ";
        }
        cnt++;
        cout << endl;
    }
}

void Pattern8Pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void Pattern9Hollow(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (j == 1 || j == (2 * i) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * (n - i) - 1; k++)
        {
            if (k == 1 || k == 2 * (n - i) - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void Pattern10Butterfly(int n)
{
    int space = n + 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
    space = 0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int l=1; l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
        space+=2;
    }
}


int main()
{
    cout << endl;
    pattern1Square(3);
    cout << endl;
    Pattern2Triangle(4);
    cout << endl;
    pattern3Triangle(4);
    cout << endl;
    pattern4Triangle(4);
    cout << endl;
    pattern5ReverseTriangle(4);
    cout << endl;
    Pattern6floydsTriangle(4);
    cout << endl;
    Pattern7InvertedTriangle(4);
    cout << endl;
    Pattern8Pyramid(4);
    cout << endl;
    Pattern9Hollow(4);
    cout << endl;
    Pattern10Butterfly(4);

    return 0;
}