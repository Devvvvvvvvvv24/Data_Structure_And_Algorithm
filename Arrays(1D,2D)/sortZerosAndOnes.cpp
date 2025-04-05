#include<iostream>
#include<vector>

using namespace std;

void sort01s(vector<int>&v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
      else noo++;
    }
      //filling them
     for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
     }
    
    return;
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
sort01s(v);
for(int i=0;i<n;i++){
   cout<<v[i]<<" ";
}
cout<<endl;
}