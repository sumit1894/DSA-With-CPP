#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<endl;

    cout<<"---------------------Time Complexity-----------------"<<endl<<endl;

    //Time Complecity!Time taken by an algorithm .
    //Time Complexity is a behavior of an algorithm when the input size increases.
    //Time Complexity is a measure of how much time an algorithm takes with respect to the input size.


    //Time Complexity is measured in Big O notation.
    // Big O notaton is a worst case scenario.


   /* for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    } */


    //Time Complexity of the above code is O(n) because the loop runs n times.
    // Graph of  0(n) is a linear graph (x=y). where x= input size and y= time taken.

    // Always take the worst case scenario. 
    

    cout<<"-------------------------------Big O Notation-------------------------------"<<endl<<endl;

    // f(n)= 4n^2 + 3n + 2              -->ignore the constants
    //n^2+2n+1                          --> ignore the lower terms
    //n^2               
    //O(n^2)                            -->Time Complexity




cout<<"-----------------------------Space Complexity-----------------------------"<<endl<<endl;

    
    //Space Complexity! Space taken by an algorithm.
    //How much space an algorithm takes with respect to the input size is called SC.


    //Space Complexity is measured in Big O notation.


    //if we take input arr [], there is no space taken by the input.
    //But if we take another arrUpt[] to store the output, then space complexity is O(n).

    //if int sum=0; then space complexity is 0(k)-->O(1) because it take a constant space. 

    


cout<<"------------------------------------Common TimeComplexity-----------------------------"<<endl<<endl;


cout<<"O(1)-->Constant Time Complexity"<<endl<<endl;

// sum of number 1-n = n(n+1)/2

int n=5;
int ans=n*(n+1)/2;
cout<<ans<<endl;

//above code has O(1) time complexity because it takes constant time to execute.
cout<<endl<<endl;



cout<<"O(n)-->Linear Time Complexity"<<endl<<endl;

cout<<"example: N factorial"<<endl;
int fact=1;
int num=5;
for(int i=1;i<=num;i++){
    fact=fact*i;
}
cout<<fact<<endl;



cout<<"O(n^2) & O(n^3)-->Quadratic Time Complexity"<<endl<<endl;

// example:- bubble sort, selection sort, insertion sort.-->O(n^2):- Two nested loops
// example:- matrix multiplication-->O(n^3):- Three nested loops


cout<<"O(log n)-->Logarithmic Time Complexity"<<endl<<endl;
// example:- Binary search, Merge sort, Quick sort. 
//if any code the output id decreasing by half in each iteration then it is O(log n) time complexity.


cout<<"O(n log n)-->Linearithmic Time Complexity"<<endl<<endl;
// example:- Merge sort, Quick sort, Heap sort.
//if any code has O(n) and O(log n) time complexity then it is O(n log n) time complexity.


cout<<"O(2^n)-->Exponential Time Complexity"<<endl<<endl;
// example:- Tower of Hanoi, Fibonacci series, recursion.
//if any code has O(2^n) O(3^n) O(4^n) time complexity then it is O(2^n) time complexity.


cout<<"O(n!)-->Factorial Time Complexity"<<endl<<endl;
// example:- Permutation, Combination.
//if any code has O(n!) time complexity then it is O(n!) time complexity.




cout<<"------------------------------------Solve Space Complexity-----------------------------"<<endl<<endl;

cout<<"Prime Number-TimeComplexity"<<endl;

int n1=9;

for (int i = 2; i<=n1 ; i++)                        //O(n)
{
    if(n1%i==0){                                   
        cout<<"Not Prime"<<endl;                    //O(1)       
        break;  
    }
    else{
        cout<<"Prime"<<endl;                         //O(1)
        break;
    }
}

//const has O(1) space complexity.
//and the loop has O(n) space complexity.



//we will understand better with the help of a quetions. 


cout<<"-------------------------------The End -----------------------------"<<endl<<endl;








    return 0;
}