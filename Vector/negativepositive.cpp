#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]>0 && v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]<0)i++;
        else if(v[j]>0)j--;
    }
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}