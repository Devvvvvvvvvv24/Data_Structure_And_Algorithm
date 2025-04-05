#include<iostream>
#include<climits>
using namespace std;

int ThirdMax(int arr[],int n){
int max1=INT_MIN;
int max2=INT_MIN;
int max3=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3 &&arr[i]!=max1 &&arr[i]!=max2)max3=arr[i];
    }
    return max3;
}
int main(){
    int arr[]={1,5,7,8,4,6,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<ThirdMax(arr,size);
}