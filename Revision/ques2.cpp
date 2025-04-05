#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={4,2,7,5,3,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
}
cout<<max<<endl;
int secmax=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>secmax && arr[i]<max){
        secmax=arr[i];
    }
}
cout<<secmax<<endl;
int third =INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>third &&arr[i]<secmax){
        third=arr[i];
    }
}
cout<<third<<endl;
}