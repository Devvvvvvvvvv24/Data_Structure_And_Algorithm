#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    v1.push_back(12);
    v1.push_back(54);
    v1.push_back(7);
    v1.push_back(92);
    v1.push_back(45);
    display(v1);
    vector<int>v2(v1.size());
    for(int i=0;i<v2.size();i++){
        int j=v1.size()-i-1;
        v2[i]=v1[j];
    }
  display(v2);
}