#include<iostream>
#include<vector>
using namespace std;

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
    int j=v.size()-1;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(i<j){
          swap(v[i],v[j]);
          j--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}