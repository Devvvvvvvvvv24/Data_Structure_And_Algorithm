#include<iostream>
using namespace std;

bool duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(duplicate(arr,n))cout<<"duplicate present"<<endl;
    else cout<<"not prsent"<<endl;
}