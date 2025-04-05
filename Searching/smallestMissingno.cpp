#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,2,4,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
        cout<<i<<endl;
        break;  ///tc =O(n)
        }
    }
}