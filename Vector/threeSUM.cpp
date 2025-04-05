#include<iostream>
#include<vector>
using namespace std;

int threesum(vector<int>&v,int target){
    int n=v.size();
    int count=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==target){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    int tar;
    cin>>tar;
    cout<<threesum(v,tar);
}