#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxones=0;
    int idx=-1;
    for(int i=0;i<m;i++){
        int noo=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1)noo++;
        }
        if(maxones<noo){
            maxones=noo;
            idx=i;
        }
    }
    cout<<idx<<" "<<maxones;
}