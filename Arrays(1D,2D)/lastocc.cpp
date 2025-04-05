#include<iostream>
#include<vector>
using namespace std;

int  lastocc(vector<int>& v,int x){
   for(int i=v.size();i>=1;i--){
     if(v[i]==x){
        return i;
        break;
     }
   }
  return -1;
   }
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     int x;
     cin>>x;
     v.push_back(x);
    }
    cout<<" enter no "<<endl;
    int x;
    cin>>x;

    cout<<lastocc(v,x);
}