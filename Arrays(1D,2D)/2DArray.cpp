#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter number of rows ";
    cin>>m;
    int n;
    cout<<"enter number of columns ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
      //  cout<<endl;
        for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
   cout<<endl;
    }

}
