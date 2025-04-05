#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pgi[n];
    stack<int>st;
    pgi[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
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