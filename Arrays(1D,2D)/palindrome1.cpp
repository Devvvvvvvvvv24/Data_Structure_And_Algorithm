#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,5,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=n-1;
    bool flag=true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[j]){
            flag=false;
            cout<<"not a palindrome "<<endl;
            break;
        }
        j--;
    }
    if(flag==true)cout<<"palindrome";
}