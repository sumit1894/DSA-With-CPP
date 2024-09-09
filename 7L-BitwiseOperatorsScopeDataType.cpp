#include <bits/stdc++.h>
using namespace std;

int bitwiseAnd(int a, int b)
{ // 5=101, 7=111 => 101
    return a & b;
}

int bitwiseOr(int a, int b)
{
    return a | b;
}

int bitwiseXor(int a, int b)
{
    return a ^ b;
}

int bitwiseLeftShift(int a, int b)
{ // 5=101 2-> two times left shift => 10100
    return a << b;
}

int bitwiseRightShift(int a, int b)
{ // 5=101 2-> two times right shift => 10
    return a >> b;
}




int main()
{

    cout << endl;
    cout << bitwiseAnd(5, 7) << endl;
    cout << "Homework" << endl;
    cout << bitwiseAnd(6, 10) << endl;
    cout << endl;
    cout << bitwiseOr(5, 7) << endl;
    cout << "Homework" << endl;
    cout << bitwiseOr(6, 10) << endl;
    cout << endl;
    cout << bitwiseXor(5, 7) << endl;
    cout << "Homework" << endl;
    cout << bitwiseXor(6, 10) << endl;
    cout << endl;
    cout << bitwiseLeftShift(5, 2) << endl; // a*2^b
    cout << "Homework" << endl;
    cout << bitwiseLeftShift(10, 2) << endl;
    cout << endl;
    cout << bitwiseRightShift(5, 1) << endl; // a/2^b
    cout << "Homework" << endl;
    cout << bitwiseRightShift(10, 1) << endl;
    cout << endl;



    cout << "---------------------------------------------------------------------------------";
    cout<<endl;



    // OperatorsPrecedence-->img in the folder
    cout << "OperatorsPrecedence" << endl;


    cout << "---------------------------------------------------------------------------------";
    cout << endl;







    cout<<"local and global scope"<<endl;
    // local Scope--> local variable can be accessed only in the function where it is declared. or in a block where it is declared.

    // Global Scope--> global variable can be accessed anywhere in the program.

    // Data Type Modifiers--> long, short,long long ,signed, unsigned .





    cout << "---------------------------------------------------------------------------------";
    cout << endl;





    cout << "Size of int " << (sizeof(int)) << endl; // 4 bytes=32 ,bits=2^32 both +ve and -ve.
    cout << "Size of long " << (sizeof(long)) << endl;
    cout << "Size of short " << (sizeof(short)) << endl;
    cout << "Size of  long long " << (sizeof(long long)) << endl;
    cout << "Size of Signed " << (sizeof(signed)) << endl;
    cout << "Size of unsigned " << (sizeof(unsigned)) << endl;



    cout << "---------------------------------------------------------------------------------"; cout << endl;



    unsigned int x = -10; // unsigned  give wrong output
    cout << x << endl;






    cout << "---------------------------------------------------------------------------------";
    cout << endl;




    cout<<"HomeWork"<<endl;
    cout<<endl;


    // Figure out how to find if the number is the power of 2  without any loops.
    //WAF to  reverse an integer n.

    cout << "---------------------------------------------------------------------------------";
    cout << endl;


    
    return 0;
}
