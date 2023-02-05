#include <iostream>
#include<vector>
using namespace std;

void create(int A[],int n){
    int i=n; //because the element insert in the last of array so i=n
    int temp=A[n]; //it store latest value inserted in array
    while (i > 0 && temp > A[i % 2 == 0 ? (i/2)-1 : i/2]){
        A[i] = A[i % 2 == 0 ? (i/2)-1 : i/2];
        i = i % 2 == 0 ? (i/2)-1 : i/2;
    }
    A[i] = temp;
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
    int a[] = {45, 35, 15, 30, 10, 12, 6, 5, 20, 50};
    create(a, 9);
    Print(a, sizeof(a)/sizeof(a[0]));
    cout << endl;

    return 0;
}
