/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

void insert(vector<int>&v1,int key){
    auto i=v1.size();
    v1.emplace_back(key); //this will help to insert element is last
    //rearrange the elements
    while(i>0 && key>v1[i%2==0? (i/2)-1 : i/2]){
        v1[i]=v1[i%2==0?(i/2)-1:i/2];
        i = i % 2 == 0 ? (i/2)-1 : i/2;
    }
    v1[i]=key;
}
template <class T>
void Print(T& vec,int n){
    cout<<" max heap: ["<<flush;
    for(int i=0;i<n;i++){
        cout<< vec[i] <<flush;
        if(i<n-1){
            cout<<","<<flush;
        }
    }
    cout<<"]"<<endl;
}
int main()
{
    vector<int>v= {45, 35, 15, 30, 10, 12, 6, 5, 20};
    Print(v, v.size());
    v.reserve(15);//this will reserve space for 15 elements
    insert(v,50);
    Print(v,v.size());
    return 0;
}
