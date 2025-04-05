#include<iostream>
using namespace std;


int main(){
    int arr[]={2,3,4,21,3,9,53,2,13,3};
    int n=sizeof(arr)/sizeof(arr[0]);

  //INSERTION SORT
  //swap the first ele of unsorted part unitl it reaches its correct postion in sorted array..
  //best case=O(n)
    for(int i=1;i<n;i++){
         int j=i;
         while(j>=1 &&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
         }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}