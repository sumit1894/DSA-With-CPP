#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main(){

    cout<<"----------------------Vector----------------------7"<<endl<<endl;

    cout<<"vector first initialization"<<endl;
    vector<int> vec1;

    cout<<endl;

    cout<<"vector second initialization"<<endl;
    vector<int> vec2={1,2,3,4,5};
    cout<<vec2[0]<<endl;

    cout<<endl;

    cout<<"vector Third initialization"<<endl;
    vector<int> vec3(5,10);  //5 is size of vector and 10 is value of vector
    cout<<vec3[0]<<endl;
    cout<<vec3[2]<<endl;
    cout<<vec3[4]<<endl;

    cout<<endl;

    cout<<"-------------------- For-Each-Loop -----------------------28"<<endl<<endl;

    vector<int> vec4={1,2,3,4,5};
    for(int value : vec4){
        cout<<value<<" ";
    }

    cout<<endl;

    cout<<"---------------------- Vector-Function---------------------37"<<endl<<endl;

    cout<<"size of Vector"<<endl;//tell the size of vector
    vector<int> vec5={1,2,3,4,5};
    cout<<vec5.size()<<endl; //
    
    cout<<endl;

    cout<<"push_back in Vector"<<endl;//add element in vector at the end
    vector<int> vec6={1,2,3,4,5};
    vec6.push_back(6);

    for(int value : vec6){
        cout<<value<<" ";
    }

    cout<<endl<<endl;

    cout<<"pop_back in Vector"<<endl;//remove element in vector at the end
    vector<int> vec7={1,2,3,4,5,6};
    vec7.pop_back();
    for(int value: vec7){
        cout<<value<<" ";
    }

    cout<<endl<<endl;

    cout<<"front in Vector"<<endl;//return the first element of vector
    vector<int> vec8={1,2,3,4,5};
    cout<<vec8.front()<<endl;

    cout<<endl<<endl;

    cout<<"back in Vector"<<endl;//return the last element of vector
    vector<int> vec9={1,2,3,4,5};
    cout<<vec9.back()<<endl;

    cout<<endl<<endl;

    cout<<"at in Vector"<<endl;//return the element at the given index

    vector<int> vec10={1,2,3,4,5};
    cout<<vec10.at(2)<<endl;
    cout<<vec10.at(4)<<endl;

    cout<<endl<<endl;
    
    
    cout<<"---------------- Static V/s Dynamic Allocation------------------85"<<endl<<endl;

    cout<<"Static Allocation"<<endl;
    int arr[5]={1,2,3,4,5};
    //it make the memory allocation at compile time
    //it use stack memory    
    //it is fast
    //it is not resizable

    cout<<"Dynamic Allocation"<<endl;
     vector <int> vec11={1,2,3,4,5};
    //it make the memory allocation at run time
    //it use heap memory
    //it is slow
    //it is resizable

    cout<<endl<<endl;

    cout<<"Example:-"<<endl;

    vector <int> vec12; // 0 size and 0 capacity, Will be double when it is full
    vec12.push_back(1); // 1 size and 1 capacity
    vec12.push_back(2); // 2 size and 2 capacity
    vec12.push_back(3);// 3 size and 4 capacity

    cout<<"Vector size is "<<vec12.size()<<endl;
    cout<<"Vector capacity is "<<vec12.capacity()<<endl;
    
    
    
    
    
    
    
    
    return 0;


}
