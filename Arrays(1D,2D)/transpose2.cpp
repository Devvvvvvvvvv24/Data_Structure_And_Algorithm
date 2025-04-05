#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={1,2,3,5,6,7};
    int trans[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            trans[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}