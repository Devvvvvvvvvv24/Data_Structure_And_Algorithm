#include<iostream>
#include<climits>
using namespace std;

int largestt(int *arr,int n){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max3=max2;
             max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 &&arr[i]!=max1){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3 &&arr[i]!=max1 &&arr[i]!=max2){
            max3=arr[i];
        }
    }
    return max3;

}
int smallestt(int*arr,int n){
    int min1=INT_MAX;
    int min2=INT_MAX;
    int min3=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min3=min2;
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2 &&arr[i]!=min1){
            min3=min2;
            min2=arr[i];
        }
        else if(arr[i]<min3 &&arr[i]!=min1 &&arr[i]!=min2){
            min3=arr[i];
        }
    }
    return min3;
}
int main(){
    int arr[]={5,1,2,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    //secondlargest
    cout<<largestt(arr,n);
    cout<<endl;
    cout<<smallestt(arr,n);
}