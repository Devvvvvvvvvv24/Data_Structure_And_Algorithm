#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag= true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=false;
        }
    }
    if(flag==true)cout<<"palindrome "<<endl;
    else cout<<"not"<<endl;
}
