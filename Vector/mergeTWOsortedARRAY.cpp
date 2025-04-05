#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeTWO(vector<int>&v1,vector<int>&v2){
    int n1=v1.size();
    int n2=v2.size();
    vector<int>v3(n1+n2);
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 &&j<n2){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
        }
        else{
            v3[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==n1){
        while(j<n2){
            v3[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==n2){
        while(i<n1){
            v3[k]=v1[i];
            i++;
            k++;
        }
    }
    return v3;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(7);
    vector<int>v2;
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(9);
    vector<int>v4;
    v4=mergeTWO(v1,v2);
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
}