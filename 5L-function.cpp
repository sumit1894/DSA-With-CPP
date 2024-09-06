#include <bits/stdc++.h>
using namespace std;

void MinOfTwo(int a, int b)
{
    if (a < b)
    {
        cout << "MinOfTwo " << a << endl;
    }
    else
    {
        cout << "MinOfTwo " << b << endl;
    }
}

void sumOfNum1ToN(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "sumOfNum1ToN " << sum << endl;
}

void NFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "NFactorial " << fact << endl;
}

void SumOfDigitsOfNumbner(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "SumOfDigitsOfNumbner " << sum << endl;
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
void nCrBinomialCoefficient(int n, int r)
{
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_nCr = factorial(n - r);
    cout << "nCr:- " << factorial_n / (factorial_r * factorial_nCr) << endl;
}

void PrimeOrNot(int n)
{
    int count = 0;
    for (int i = 1; i <= 2; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}

void PrintPrimenumber(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                cout << i << " ";
                break;
            }
        }
    }
}

// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

void fibonacci(int n)
{
    int first = 0, second = 1, next;
for (int i = 0; i < n; i++)
{
    if(i==0){
        cout<<first<<" ";
        continue;
    }
    if(i==1){
        cout<<second<<" ";
        continue;
    }
    next = first + second;
    first = second;
    second = next;
    cout<<next<<" ";
}


    

   
}

int main()
{

    cout << endl;
    MinOfTwo(9, 6);
    cout << endl;
    sumOfNum1ToN(5);
    cout << endl;
    NFactorial(5);
    cout << endl;
    SumOfDigitsOfNumbner(576);
    cout << endl;
    nCrBinomialCoefficient(5, 2);
    cout << endl;
    PrimeOrNot(4);
    cout << endl;
    PrintPrimenumber(10);
    cout << endl;
    fibonacci(10);

    return 0;
}