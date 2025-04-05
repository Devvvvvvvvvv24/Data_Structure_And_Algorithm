#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int largestthisto(vector<int>&arr){
    int n=arr.size();
    int nse[n];
    stack<int>st;
    nse[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.size()==0)nse[i]=n;
        else nse[i]=st.top();
        st.push(i);
    }
     int pse[n];
    stack<int>gt;
    pse[0]=-1;
    gt.push(0);
    for(int i=1;i<n;i++){
        while(!gt.empty() && arr[gt.top()]>=arr[i]){
            gt.pop();
        }
        if(gt.size()==0)pse[i]=-1;
        else pse[i]=gt.top();
        gt.push(i);
    }
    int maxArea=0;
    for(int i=0;i<n;i++){
        int height=arr[i];
        int breadth=nse[i]-pse[i]-1;
        int area=height*breadth;
        maxArea=max(area,maxArea);
    }
    return maxArea;
}
int main(){
   vector<int>v={2,1,5,6,2,3};
    cout<<largestthisto(v);
}