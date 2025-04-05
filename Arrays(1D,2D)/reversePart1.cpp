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

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
    reversepart(0,3,v);
    display(v);
}