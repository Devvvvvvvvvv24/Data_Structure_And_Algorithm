#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        v2[i]=arr[arr.size()-1-i];
    }
    for(int i=0;i<n;i++){
         cout<<v2[i]<<" ";
    }
}