#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //wave print
    for(int i=0;i<n;i++){
        if(i%2!=0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}