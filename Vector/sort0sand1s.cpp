#include<iostream>
#include<vector>
using namespace std;

void sorT(vector<int>&v){
    int n=v.size();
    int noz=0;
    int noO=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
        else noO++;
    }
    for(int i=0;i<n;i++){
        if(i<noz)v[i]=0;
        else v[i]=1;
    }
}
void twopass(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
     if(v[i]==1 && v[j]==0){
        swap(v[i],v[j]);
        i++;
        j--;
     }
     else if(v[i]==0)i++;
     else if(v[j]==1)j--;
    }
}
int main(){
    
    vector<int>v;
   // int n=v.size();
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
   // v.push_back(0);
     int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    twopass(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}