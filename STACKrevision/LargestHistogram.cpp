#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int largesthisto(vector<int>&v){
    int n=v.size();
    int nsi[n];
    stack<int>st;
    nsi[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && v[st.top()]>=v[i]){
            st.pop();
        }
        if(st.size()==0)nsi[i]=n;
        else nsi[i]=st.top();
        st.push(i);
    }
    int pse[n];
    stack<int>s;
    pse[0]=-1;
    s.push(0);
    for(int i=1;i<n;i++){
        while(!s.empty() && v[s.top()]>=v[i]){
            s.pop();
        }
        if(s.empty()==0)pse[i]=-1;
        else pse[i]=st.top();
        st.push(i);
    }
    int maxArea=0;
    for(int i=0;i<n;i++){
        int height=v[i];
        int breadth=nsi[i]-pse[i]-1;
        int area=height*breadth;
        maxArea=max(area,maxArea);
    }
    return maxArea;
}
int main(){
    vector<int>v={2,1,5,6,2,3};
    cout<<largesthisto(v);
}