#include<iostream>
using namespace std;


int main(){
int arr[]={4,2,1,5,6,7};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n-1;i++){
    int minidx=i;
    int minele=INT_MAX;
    for(int j=i;j<n;j++){
        if(arr[j]<minele){
            minidx=j;
            minele=arr[j];
        }
    }
    if(minidx!=i)swap(arr[i],arr[minidx]);
}
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}