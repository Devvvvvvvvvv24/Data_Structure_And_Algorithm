#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,1,11,23,3,22,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
  for(int i=0;i<size;i++){
    maxi=max(arr[i],maxi);
  }
  cout<<maxi;
}