#include<iostream>
using namespace std;

void reversePart(int i,int j,int *arr){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
        }
    int k;
    cin>>k;
    if(k>n)k=k%n;
    reversePart(0,n-k-1,arr);
    reversePart(n-k,n-1,arr);
    reversePart(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}