#include<iostream>
#include<vector>
using namespace std;

void reversepart(int i,int j,vector<int>& v){
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--; 
    }
    return;
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   
   int k;
   cin>>k;
   if(k>n)k=k%n;
   reversepart(0,n-k-1,v);
   reversepart(n-k,n-1,v);
   reversepart(0,n-1,v);
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}