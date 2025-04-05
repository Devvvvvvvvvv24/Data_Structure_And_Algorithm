#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int trappedwater(vector<int>&v){
    int n=v.size();
    //previous greater element
    int pge[n];
    pge[0]=-1;
    int max=v[0];
     for(int i=1;i<n;i++){
        pge[i]=max;
        if(max<v[i])max=v[i];
     }
     //next greater element
     int nextt[n];
     nextt[n-1]=-1;
     max=v[n-1];
     for(int i=n-2;i>=0;i--){
        nextt[i]=max;
        if(max<v[i])max=v[i];
     }
     //minimum array
     int mini[n];
     for(int i=0;i<n;i++){
        mini[i]=min(pge[i],nextt[i]);
     }
     //calcualting amount of water
     int water=0;
     for(int i=0;i<n;i++){
        if(v[i]<mini[i]){
            water+=(mini[i]-v[i]);
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