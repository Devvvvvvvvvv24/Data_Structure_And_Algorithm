#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={4,3,6,8,9,4,3,2};
    int n=acumulate(v.begin(),v.end(),0);
    cout<<n;
}