#include <bits/stdc++.h>
using namespace std;

void changeArrReference(int arr[], int size)
{
    cout << "Function called" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int searchArrLinear(int arr[],int size,int target){

    for(int i=0;i<size;i++){

    if(arr[i]==target){
        return i;
        break;
        }
    }
    return -1;
}

int searchArrReverse(int arr[],int size){
     for(int i=size-1;i>=0;i--){
            cout<<arr[i]<<" ";
     }
}

void reverseArray2PointerApproach(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Array  reverse Function Call"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void sumProductArray(int arr[],int size,int &sum,int &product){
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum of Array is "<<sum<<endl;
    cout<<"Product of Array is "<<product<<endl;
}

void arrSwapMinMax(int arr[],int size){
    int minValueSwap=INT_MAX;
    int maxValueSwap=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<minValueSwap){
            minValueSwap=arr[i];
        }
        if(arr[i]>maxValueSwap){
        maxValueSwap=arr[i];
        }
    }
cout<<"Min Value is "<<minValueSwap<<endl;
cout<<"Max Value is "<<maxValueSwap<<endl<<endl;

swap(minValueSwap,maxValueSwap);
cout<<"After Swap"<<endl<<endl;

cout<<"Min Value is "<<minValueSwap<<endl;
cout<<"Max Value is "<<maxValueSwap<<endl;
}








int main()
{

    cout<<endl<< "Find the Smallest Element in an Array" << endl;

    int arrmin[] = {5, 15, 22, 1, -15, 24};
    int sizeMin = sizeof(arrmin) / sizeof(arrmin[0]);

    // int min = arrmin[0];
    int minValue = INT_MAX;
    for (int i = 0; i < sizeMin; i++)
    {
        // if (arrmin[i] < minValue)
        // {
        //     minValue = arrmin[i];
        // }
        minValue = min(arrmin[i], minValue);
    }
    cout << "Min element is " << minValue << endl;


    cout << endl<< "-------------------------------------------------------" << endl<<endl;



    cout << "Find the Largest Element in an Array" << endl;

    int arrMax[] = {5, 15, 22, 1, -15, 24};
    int sizeMax = sizeof(arrMax) / sizeof(arrMax[0]);
    // int max=arrMax[0];
    int maxValue = INT_MIN;

    for (int i = 0; i < sizeMax; i++)
    {

        // if(arrMax[i]>maxValue){
        //     maxValue=arrMax[i];
        // }

        maxValue = max(arrMax[i], maxValue);
    }
    cout << "max Element is " << maxValue << endl;


    cout << endl<< "------------------HomeWork1--------------------------" << endl<<endl;



    cout << "Find the index of smallest and largest element in an array." << endl<< endl;

    int arrIndex[] = {5, 15, 22, 1, -15, 24};
    int sizeIndex = sizeof(arrIndex) / sizeof(arrIndex[0]);
    int minIndex = INT_MAX;
    int maxIndex = INT_MIN;
    for (int i = 0; i < sizeIndex; i++)
    {
        if (arrIndex[i] < arrIndex[minIndex])
        {
            minIndex = i;
        }
        if (arrIndex[i] > arrIndex[maxIndex])
        {
            maxIndex = i;
        }
    }
    cout << "Min Element is " << arrIndex[minIndex] << " at index " << minIndex << endl;
    cout << "Max Element is " << arrIndex[maxIndex] << " at index " << maxIndex << endl;



    cout << endl<< "------------------Pass By Reference---------------------" <<endl<<endl;



    int arr[5] = {1, 2, 3, 4, 5};
    changeArrReference(arr, 5);
    cout << "Array after function call" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;



cout << endl<< "------------------------Linear Search----------------------" <<endl<<endl;



cout<<"Find the Target Element in an Array"<<endl<<endl;

int arrSearch[]={4,2,7,8,1,2,5};
int sizeSearch=sizeof(arrSearch)/sizeof(arrSearch[0]);
int target=8;
cout<<"SearchElementIndex:- "<<searchArrLinear(arrSearch,sizeSearch,target)<<endl<<endl;




cout<< endl<< "--------------------Reverse an Array------------------" <<endl<<endl;



int arrReverse[]={4,2,7,8,1,2,5};
int sizeReverse=sizeof(arrReverse)/sizeof(arrReverse[0]);
searchArrReverse(arrReverse,sizeReverse);//does not change original array
cout<<endl;



cout << endl<< "----------Reverse an Array 2 Pointer Approach--------------" <<endl<<endl;



int arrReverse2[]={4,2,7,8,1,2,5};
int sizeReverse2=sizeof(arrReverse2)/sizeof(arrReverse2[0]);

reverseArray2PointerApproach(arrReverse2,sizeReverse2);

cout<<endl<<"Array after Function  Call (main-Call)"<<endl;
for(int i=0;i<sizeReverse2;i++){
    cout<<arrReverse2[i]<<" ";
}
cout<<endl;



cout<<endl<<"-------------------------HomeWork2------------------------------"<<endl<<endl;



cout<<"WAF to calculate the sum & Product of an array."<<endl<<endl;

int arrSum[]={1,2,3,4,5};
int sizeSum=sizeof(arrSum)/sizeof(arrSum[0]);
int sum=0;
int product=1;
sumProductArray(arrSum,sizeSum,sum,product);
cout<<endl; 



cout << endl<< "------------------------HomeWork3-----------------------" << endl<<endl;

cout<<"WAP to Swap the maximum and minimum number of an array."<<endl<<endl;


int arrSwap[]={1,2,3,4,5};
int sizeSwap=sizeof(arrSwap)/sizeof(arrSwap[0]);

arrSwapMinMax(arrSwap,sizeSwap);
cout<<endl;


cout << endl<< "------------------------HomeWork4-----------------------" << endl<<endl;



    return 0;
}

