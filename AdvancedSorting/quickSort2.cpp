#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotElement=arr[(si+ei)/2];//random mid element
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
     if(arr[i]<pivotElement)count++;
    }
  int pivotidx=count+si;//return
  swap(arr[(si+ei)/2],arr[pivotidx]);
  int i=si;
  int j=ei;
  while(i<pivotidx && j>pivotidx){
    if(arr[i]<=pivotElement)i++;
        if(arr[j]>pivotElement)j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
  }
  return pivotidx;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei)return;
    int pi=partition(arr,si,ei);//return pivotidx
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}
int main(){
int arr[]={5,4,6,7,1,2,8,7};
int n=sizeof(arr)/sizeof(arr[0]);

quickSort(arr,0,n-1);//array starting idx ending idx
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}