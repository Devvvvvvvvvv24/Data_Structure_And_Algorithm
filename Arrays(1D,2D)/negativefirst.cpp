#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int z=v.size();
    int i=0;
    int j=z-1;
    while(i<j){
        if(v[i]<0)i++;
        if(v[j]>0)j--;
        if(i>j)break;
        if(v[i]>0 &&v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}