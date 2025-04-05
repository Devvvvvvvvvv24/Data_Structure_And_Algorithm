#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<6;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cin>>x;
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;
}