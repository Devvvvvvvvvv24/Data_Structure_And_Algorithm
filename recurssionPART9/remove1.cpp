#include<iostream>
#include<vector>
using namespace std;

void remove(vector<int>&v,vector<int>&ans,int idx){
    if(idx==v.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int di=v[idx];
    if(di==1)remove(v,ans,idx+1);
    else{
        ans.push_back(v[idx]);
        remove(v,ans,idx+1);
    }
}
int main(){
    vector<int>v={1,2,3,1,1,2,3,5,6,3,1};
    vector<int>ans;
    remove(v,ans,0);
}