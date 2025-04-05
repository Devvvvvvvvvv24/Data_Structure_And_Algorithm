#include<iostream>
#include<climits>
using namespace std;

int secondlargest(int arr[],int n){
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
         max2=max1;
         max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1)max2=arr[i];
    }
    return max2;
}
int main(){
    int arr[]={3,55,21,42,11,34,21};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sec=secondlargest(arr,size);
    cout<<sec;
}