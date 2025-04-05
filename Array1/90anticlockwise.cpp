#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int j=0;j<c;j++){
        for(int i=0;i<r/2;i++){
            swap(arr[i][j],arr[r-i-1][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}