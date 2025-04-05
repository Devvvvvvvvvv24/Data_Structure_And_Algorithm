#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr,int si,int ei){
    int pivotele=arr[(si+ei)/2];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(i==(si+ei)/2)continue;
        if(arr[i]<=pivotele)count++;
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx &&j>pivotidx){
        if(arr[i]<=pivotele)i++;
        if(arr[j]>pivotele)j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int qucikSort(vector<int>&arr,int si,int ei,int k){
    // if(si>=ei)return;
    int pi=partition(arr,si,ei);
     if(pi+1==(arr.size()-k))return arr[pi];
     else if(pi+1<(arr.size()-k))return qucikSort(arr,pi+1,ei,k);
     else return qucikSort(arr,si,pi-1,k);
    // qucikSort(arr,pi+1,ei);
}
int main(){
    vector<int>arr={2,1};
    int n=arr.size();
    // int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    cout<<qucikSort(arr,0,n-1,k);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}