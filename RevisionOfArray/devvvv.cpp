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
      int r1,c1;
      cin>>r1>>c1;
     int arr2[r1][c1];
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr2[i][j];
        }
     }
     if(c==r1){
        int arr3[r][c1];
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                arr3[i][j]=0;
                for(int k=0;k<c;k++){
                    arr3[i][j]+=(arr[i][k]*arr2[k][j]);
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c1;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
     }
     else {
        cout<<"cant multiplyyyyyy"<<endl;
     }
}