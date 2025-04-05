#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotEle=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotEle)count++;
    }
    int pivtidx=si+count;
    swap(arr[si],arr[pivtidx]);
    int i=si;
    int j=ei;
    while(i<pivtidx && j>pivtidx){
        if(arr[i]<=pivotEle)i++;
        else if(arr[j]>pivotEle)j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivtidx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partition(arr,si,ei);

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={1,5,3,6,7,8,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
