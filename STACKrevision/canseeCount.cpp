#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> canseecount(vector<int>&v){
    
    int n=v.size();
    vector<int>ans(n,0);
    stack<int>st;
    ans[n-1]=0;
    st.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        int count=0;
        while(st.size()>0 && st.top()<v[i]){
           st.pop();
           count++;
        }
        if(st.size()!=0)count++; //imp
        ans[i]=count;
        st.push(v[i]);
    }
    return ans;

}
int main(){
    vector<int>v={10,6,8,5,11,9};
    vector<int>nn=canseecount(v);
    for(int i=0;i<nn.size();i++){
        cout<<nn[i]<<" ";
    }
}