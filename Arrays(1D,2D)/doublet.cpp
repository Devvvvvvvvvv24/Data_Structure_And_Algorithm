#include<iostream>
#include<vector>
using namespace std;

int doublet(vector<int>& v,int x){
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                count++;
            }
        }
    }
    return count;
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
    int x;
    cin>>x;
    cout<<doublet(v,x);
}