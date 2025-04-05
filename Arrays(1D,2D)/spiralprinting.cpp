#include<iostream>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;
    int tne=n*m;
    int count=0;
    while(minr<=maxr&&minc<=maxc){
        for(int i=minc;i<=maxc &&count<tne;i++){
            cout<<arr[minr][i]<<" ";
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr &&count<tne;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        for(int i=maxc;i>=minc &&count<tne;i--){
            cout<<arr[maxr][i]<<" ";
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr &&count<tne;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;

    }

}