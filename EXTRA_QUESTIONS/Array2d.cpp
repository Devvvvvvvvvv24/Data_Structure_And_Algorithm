#include<iostream>
#include<climits>
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
    int r,p;
    cin>>r>>p;
   int arr2[r][p];
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++){
            cin>>arr2[i][j];
        }
    }
   for(int i=0;i<r;i++){
    for(int j=0;j<p;j++){
        arr[i][j]+=arr2[i][j];
    }
   }
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}