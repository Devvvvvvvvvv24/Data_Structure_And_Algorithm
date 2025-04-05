#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);//if we declare size here take 
                    //input as array
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}