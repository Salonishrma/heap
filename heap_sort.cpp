#include <bits/stdc++.h>
using namespace std;
void Insert(int A[],int n) 
{ 
 int i=n,temp; 
 temp=A[i]; 
 while(i>1 && temp>A[i/2]) 
 { 
 A[i]=A[i/2]; 
 i=i/2; 
 } 
 A[i]=temp; 
} 
int Delete(int A[],int n) 
{ 
 int i,j,x,temp,val; 
 val=A[1]; //in heap we can delete only the root element 
 x=A[n];  // in x variable we store the last element
 A[1]=A[n]; // at ist index store last element
 A[n]=val; //now at first index a[n] is there 
 i=1;j=i*2; 
 while(j<=n-1) //when it go out of heap
 { 
 if(j<n-1 && A[j+1]>A[j])  //compare left and right child
 j=j+1; 
 if(A[i]<A[j])  //if element is smaller
 { 
 temp=A[i]; 
 A[i]=A[j];  //swap them
 A[j]=temp; 
 i=j;  //take i on j
 j=2*j; //move j to left child
 } 
 else
 break; 
 } 
 return val;  //delete element store at last index it will sort the elements
} 
int main() { 
 int H[]={0,14,15,5,20,30,8,40}; 
 int i; 
 for(i=2;i<=7;i++) 
 Insert(H,i); 
 
 for(i=7;i>1;i--) 
 { 
 Delete(H,i); 
 } 
 for(i=1;i<=7;i++) 
 cout<<H[i]<<" "; 
 
 
 return 0; 
}
