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
    //transpose
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
           swap(arr[i][j],arr[j][i]);
        }
    } 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //reverse each col
    for(int j=0;j<n;j++){
        for(int i=0;i<m/2;i++){
            swap(arr[i][j],arr[n-i-1][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
