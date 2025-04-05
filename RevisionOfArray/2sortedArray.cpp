#include<iostream>
using namespace std;

void mergee(int arr1[],int n1,int arr2[],int n2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else arr3[k++]=arr2[j++];
    }
  if(i==n1){
    while(j<n2)arr3[k++]=arr2[j++];
  }
  if(j==n2)while(i<n1)arr3[k++]=arr1[i++];
}
int main(){
    int arr1[]={1,3,4,6,9,11,14};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,4,5,7,8,10,12,15,20};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int m=n1+n2;
    int arr3[m];
    mergee(arr1,n1,arr2,n2,arr3);
    for(int i=0;i<m;i++){
        cout<<arr3[i]<<" ";
    }
}