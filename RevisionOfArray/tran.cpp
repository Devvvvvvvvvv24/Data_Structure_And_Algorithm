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
   int trans[c1][r1];
   for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
        trans[i][j]=arr[j][i];
    }
   }
  for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
        cout<<trans[i][j]<<" ";
    }
    cout<<endl;
  }
}