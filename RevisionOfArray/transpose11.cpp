#include<iostream>
using namespace std;




int main(){
    int r1,c1;
    cin>>r1>>c1;
    int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=i+1;j<c1;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}