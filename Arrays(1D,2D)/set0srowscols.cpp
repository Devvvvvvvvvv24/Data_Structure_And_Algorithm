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
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                for(int t=0;t<m;t++)b[t][j]=0;
                for(int p=0;p<n;p++)b[i][p]=0;
            }
            else{
                if(b[i][j]==0)continue;
                b[i][j]=arr[i][j];
            }

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}