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
    stack<int>st;
    int nge[n];
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        //pop
        while(st.size()>0 &&st.top()<=arr[i]){
            st.pop();
        }
        //ans
        if(st.size()==0)nge[i]=-1;
        else nge[i]=st.top();
        //push
        st.push(arr[i]);
            }
            for(int i=0;i<n;i++){
                cout<<nge[i]<<" ";
            }
            
}