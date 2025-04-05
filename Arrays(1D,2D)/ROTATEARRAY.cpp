#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}
int main(){
     int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    if(k>n)k=k%n;
    reversepart(0,n-k-1,v);//0 based indexing
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}