#include<bits/stdc++.h>
using namespace std;


//pass by reference

void changeY(int *ptr){
    *ptr=20;
}


//pass by alies

void changeZ(int &zz){
    zz=25;
}



int main(){

cout<<"-------------------Memory Address-------------------"<<endl<<endl;

int a=10;
cout<<"memory address is:-"<<&a<<endl<<endl;


cout<<"-------------------Pointer-------------------"<<endl<<endl;

cout<<"is a special variable thsat stores the memory address of another variable."<<endl<<endl;
int b=20;
int* ptr=&b;
int** pPtr=&ptr;

cout<<"memory address of b:-"<<&b<<endl;
cout<<"Value of pPtr:- "<<ptr<<endl<<endl;

cout<<"memory address  of pPtr:-"<<&ptr<<endl;
cout<<"Value of pPtr:- "<<pPtr<<endl<<endl;


cout<<"-------------------Dereference Operator-------------------"<<endl<<endl;

cout<<"Gives the value of the give address."<<endl<<endl;
int c=30;
int* ptr1=&c;
int **pPtr1=&ptr1;
cout<<"value of c:- "<<*(&c)<<endl;
cout<<"value of c:- "<<*ptr1<<endl;
cout<<"value of c:- "<<**pPtr1<<endl<<endl;



cout<<"------------------------NULL Pointer ---------------------------"<<endl<<endl;

cout<<"A pointer that is not pointing to any memory location."<<endl<<endl;
int** ptr2=NULL;
cout<<"value of ptr2:- "<<ptr2<<endl<<endl;
// cout<<"value of *ptr2:- "<<*ptr2<<endl<<endl; //segmentation fault means it is not pointing to any memory location.



cout<<"---------------------Question Predict Output---------------------"<<endl<<endl;


int x=5;
int* p=&x;
int** q=&p;

cout<<"value of x:- "<<*p<<endl; 
cout<<"value of x:- "<<**q<<endl<<endl; 

cout<<"value of x:- "<<p<<endl; 
cout<<"value of x:- "<<*q<<endl<<endl;


cout<<"------------------------Pass By Reference---------------------------"<<endl<<endl;

int y=10;
changeY(&y);
cout<<"value of y:- "<<y<<endl<<endl;



cout<<"------------------------Pass By alies---------------------------"<<endl<<endl;

//alien is a reference to the original variable. selecting same address by two different variables.

int z=15;
changeZ(z);
cout<<"value of z:- "<<z<<endl<<endl;



cout<<"------------------------Array Pointers ---------------------------"<<endl<<endl;

int arr[5]={1,2,3,4,5};

cout<<arr<<endl;//gives the address of the first element of the array.
cout<<*arr<<endl;//gives the value of the first element of the array.

cout<<"array is a constant pointer."<<endl<<endl;


cout<<"------------------------Pointer Arithmetic ---------------------------"<<endl<<endl;

cout<<"pointer increment."<<endl;
int aa=10;
int *ptrr=&aa;
cout<<"before increment:- "<<ptrr<<endl;
ptrr++;
cout<<"after increment:- "<<ptrr<<endl<<endl;

cout<<"pointer decrement."<<endl;
int bb=10;
int *ptrrr=&bb;
cout<<"before decrement:- "<<ptrrr<<endl;
ptrrr--;
cout<<"after decrement:- "<<ptrrr<<endl<<endl;

cout<<"pointer addition."<<endl;
int cc=10;
int *ptrrrr=&cc;
cout<<"before addition:- "<<ptrrrr<<endl;
ptrrrr=ptrrrr+2;                                    // chnage in 2*4=8 bytes.
cout<<"after addition +2:- "<<ptrrrr<<endl<<endl; 

cout<<"pointer subtraction."<<endl;
int dd=10;
int *ptrrrrr=&dd;
cout<<"before subtraction:- "<<ptrrrrr<<endl;
ptrrrrr=ptrrrrr-2;
cout<<"after subtraction -2:- "<<ptrrrrr<<endl<<endl;


cout<<"------------------------Pointer Comparison ---------------------------"<<endl<<endl;

int *w;
int *ww=w+2;
cout<<ww-w<<endl; 
cout<<"all comparision (==,!=,<,>,<=,>=) are valid in pointers."<<endl;
cout<<(w<ww)<<endl<<endl;//true=1 false=0



cout<<"------------------------question---------------------------"<<endl<<endl;


int arrr[5]={10,20,30,40};
int *pp1=arrr;

cout<<*(pp1+1)<<endl;//20
cout<<*(pp1+3)<<endl;//40
pp1++;
cout<<*ptr<<endl;//20








    return 0;
}