#include<iostream>
#include<vector>
using namespace std;

int go(vector<int>&v,int val,int size){
    int carry=0;
    for(int i=0;i<size;i++){
        int pro=v[i]*val+carry;
        v[i]=pro%10;
        carry=pro/10;
    }
    while(carry){
         v[size]=carry%10;
         carry/=10;
         size++;
    }
    return size;
}
int main(){
    vector<int>v(100,0);
    int n=5;
    int size=1;
    v[0]=1;
    for(int i=2;i<=n;i++){
        size=go(v,i,size);
    }
    for(int i=size-1;i>=0;i--)cout<<v[i];
}