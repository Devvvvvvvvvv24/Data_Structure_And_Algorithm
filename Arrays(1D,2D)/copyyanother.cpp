#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[n];
    int j=0;
    for(int i=0;i<n;i++){
        arr2[j]=arr[i];
        j++;
    }
    for(int j=0;j<n/2;j++){
         int temp=arr2[j];
         arr2[j]=arr2[n-j-1];
         arr2[n-j-1]=temp;
    }
for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
}
cout<<endl;
}