#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int trappedwater(vector<int> &v){
    int n=v.size();
    int pge[n];
    pge[0]=-1;
    int max=v[0];
   for(int i=1;i<n;i++){
    pge[i]=max;
    if(max<v[i])max=v[i];
   }
   //treating pge array as next array
   pge[n-1]=-1;
   max=v[n-1];
   for(int i=n-2;i>=0;i--){
      if(max<pge[i])pge[i]=max;
      if(max<v[i])max=v[i];
   }
   //calculating water
   int water=0;
   for(int i=1;i<n-1;i++){
    if(v[i]<pge[i]){
        water+=(pge[i]-v[i]);
    }
   }
   return water;
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
    cout<<endl;
    cout<<trappedwater(v);
}