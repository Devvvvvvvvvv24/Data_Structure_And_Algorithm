#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int p;
    cin>>p;
    int q;
    cin>>q;

    if(m==p){
         int arr[n][m];
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
         }
         int arr2[p][q];
         for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>arr2[i][j];
            }
         }
         int res[n][q];
         for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=arr[i][k]*arr2[k][j];
                }
            }
         }
         for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
         }
    }
    else{
        cout<<"matrix cannot be multiplied "<<endl;
    }
}