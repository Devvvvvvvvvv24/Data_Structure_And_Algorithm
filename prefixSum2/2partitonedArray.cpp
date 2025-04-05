#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,1,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    int idx=-1;
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==true)cout<<"array partioned after at idx"<<idx<<endl;
    else cout<<"not"<<endl;
}