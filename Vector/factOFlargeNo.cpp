#include<bits/stdc++.h>
using namespace std;

int go(vector<int>&v,int val,int size){
    int carry=0;
    for(int i=0;i<size;i++){
        int product=v[i]*val+carry;
        v[i]=product%10;
        carry=product/10;
    }
    while(carry){
        v[size]=carry%10;
        carry/=10;
        size++;
    }
    return size;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(500,0);
    v[0]=1;
    int size=1;
    for(int i=2;i<=n;i++){
        size=go(v,i,size);
    }
    for(int i=size-1;i>=0;i--){
     cout<<v[i]<<"";
    }
}