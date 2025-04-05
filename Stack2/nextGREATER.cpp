#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,4,2,6,4,1,2,3,4,5,6,7};

    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int>st;
    int nge[n];
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
    while(!st.empty() && st.top()<=arr[i]){
        st.pop();
    }
    if(st.empty())nge[i]=-1;
    else nge[i]=st.top();
    st.push(arr[i]);
    }
for(int i=0;i<n;i++){
    cout<<nge[i]<<" "; 
}
   

}