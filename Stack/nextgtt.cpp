#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={1,3,4,2,6,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    cout<<endl;
    int nge[n];
    stack<int>st;
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 &&st.top()<=arr[i]){
            st.pop();
            }
            if(st.size()==0)nge[i]=-1;
            else nge[i]=st.top();
            st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}