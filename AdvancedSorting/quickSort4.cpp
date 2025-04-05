#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotEle=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
        if(arr[i]<=pivotEle)count++;
    }
    int pivotidx=count+si;
    swap(arr[pivotidx],arr[(si+ei)/2]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotEle)i++;
        if(arr[j]>pivotEle)j--;
        if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,6,1,3,7,6,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}