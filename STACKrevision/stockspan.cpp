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
 int pge[n];
 stack<int>st;
 pge[0]=1;
 st.push(0);
 for(int i=1;i<n;i++){
   while(!st.empty() && arr[st.top()]<=arr[i]){
    st.pop();
   }
   if(st.size()==0)pge[i]=-1;
   else pge[i]=st.top();
   pge[i]=i-pge[i];
   st.push(i);
 }
 for(int i=0;i<n;i++){
    cout<<pge[i]<<" ";
 }
 cout<<endl;
}