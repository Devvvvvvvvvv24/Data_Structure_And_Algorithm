#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int>st;
    vector<int>ans(n,0);
    ans[n-1]=0;
    st.push(arr[n-1]);
     for(int i=n-2;i>=0;i--){
        int count=0;
        while(st.size()>0 && st.top()<arr[i]){
            st.pop();
            count++;
        }
        if(st.size()!=0)count++;
        ans[i]=count;
        st.push(arr[i]);
     }
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
     }
}