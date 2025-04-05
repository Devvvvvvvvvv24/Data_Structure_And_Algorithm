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
    int p,q;
    cin>>p>>q;
    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr2[i][j];
        }
    }
    //condition
    if(n==p){
      int arr3[m][q];
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
        arr3[i][j]=0;
        for(int k=0;k<n;k++){
            arr3[i][j]+=(arr[i][k]*arr[k][j]);
        }
        }
      }
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
      }
    }
    else{
        cout<<"multiplication cant be possible"<<endl;
    }
}