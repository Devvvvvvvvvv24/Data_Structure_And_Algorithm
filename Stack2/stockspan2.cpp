#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);

    stack<int>st;
    int pgi[n];
    pgi[0]=1; //first element initialise with 1
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0)pgi[i]=-1;
        else pgi[i]=st.top();
        pgi[i]=i-pgi[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }

}