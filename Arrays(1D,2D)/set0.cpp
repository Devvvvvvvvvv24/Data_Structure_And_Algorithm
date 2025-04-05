#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int brr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0){
                for(int t=0;t<3;t++)brr[t][j]=0;
                for(int p=0;p<3;p++)brr[i][p]=0;
            }
            else{
                if(brr[i][j]==0)continue;
                brr[i][j]=arr[i][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}