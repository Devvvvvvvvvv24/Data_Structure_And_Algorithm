#include<iostream>
#include<vector>
using namespace std;

void countSort(vector<int>&arr){
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    vector<int>freq(maxi+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=1;i<=maxi;i++){
        freq[i]+=freq[i-1];
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[--freq[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)arr[i]=ans[i];
}
int main(){
    vector<int>arr={5,4,2,5,1,3,5,6};
    countSort(arr);
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
    
}