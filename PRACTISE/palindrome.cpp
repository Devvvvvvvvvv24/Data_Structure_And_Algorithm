#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,1,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
    // int j=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            cout<<"not palindrome"<<endl;
            flag=false;
            break;
        }
    }
    if(flag==true)cout<<"palindrome"<<endl;
}