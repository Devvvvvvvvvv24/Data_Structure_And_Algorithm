#include<iostream>
#include<vector>
using namespace std;


void sort012(vector<int>& v){
    int n=v.size();
    int noz=0;
    int noo=0;
    int noot=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
        else if(v[i]==1)noo++;
        else noot++;
    }
    //filling
    for(int i=0;i<n;i++){
        if(i<noz)v[i]=0;
        else if(i<(noz+noo))v[i]=1;
        else v[i]=2;
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
    sort012(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}