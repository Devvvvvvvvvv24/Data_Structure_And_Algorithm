#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v;
    v.push_back(41);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(14);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.size()<<" ";
   // cout<<v.capacity()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<" ";
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
    sort(v.begin(),v.end());
    cout<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" " ;
     }
    }