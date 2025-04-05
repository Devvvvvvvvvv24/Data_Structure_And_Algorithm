#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    int occ=-1;
    for(int i=0;i<6;i++){
        if(v[i]==x){
            occ=i;
        }
    }
    cout<<occ;
}