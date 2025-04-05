#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int>&arr){
    int n=arr.size();
    int maxele=INT_MIN;
    for(int i=0;i<n;i++){
        maxele=max(maxele,arr[i]);
    }
    vector<int>freq(maxele+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
   for(int i=1;i<=maxele;i++){
    freq[i]+=freq[i-1];
   }
   vector<int>ans(n);
   for(int i=n-1;i>=0;i--){
       ans[--freq[arr[i]]]=arr[i];
   }
   for(int i=0;i<n;i++)arr[i]=ans[i];
}
int main(){
    int n=5;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int n=arr.size();
    countSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}