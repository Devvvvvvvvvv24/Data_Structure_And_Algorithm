#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool flag=false;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            flag=true;
            break;
        }
    }
    if(flag)cout<<"array is partioned after idx "<<idx<<" ";
    else cout<<"not partitioned "<<endl;
}