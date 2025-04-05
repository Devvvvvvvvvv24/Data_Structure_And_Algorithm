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
    for(int k=0;k<r;k++){
        int i=0;
        int j=r-1;
        while(i<=j){
            swap(arr[k][i],arr[k][j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}