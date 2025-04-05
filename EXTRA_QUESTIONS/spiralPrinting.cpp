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
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || mic>maxc)break;
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        for(int i=maxc;i>=minc;i--){
           cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }

}