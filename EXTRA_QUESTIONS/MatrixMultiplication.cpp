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
    int r,p;
    cin>>r>>p;
   int arr2[r][p];
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++){
            cin>>arr2[i][j];
        }
    }
   if(n!=r){
    cout<<"matrix cant be multiplied"<<endl;
   }
  
   else {
     int res[m][p];
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
     res[i][j]=0;
     for(int k=0;k<n;k++){
       res[i][j]+=(arr[i][k]*arr2[k][j]);
     }
        }
    }
     for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
    cout<<res[i][j]<<" ";
    }
    cout<<endl;
   }
   }
  
}