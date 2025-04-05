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
    int r2,c2;
     cin>>r2>>c2;
    int arr2[r2][c2];
   
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
  if(c1==r2){
    int arr3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            arr3[i][j]=0;
            for(int k=0;k<c2;k++){
                arr3[i][j]+=(arr[k][i]*arr[j][k]);
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
  }
  else{
    cout<<"cannot multiplyyyyy"<<endl;
  }
}