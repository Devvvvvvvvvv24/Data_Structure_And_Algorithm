#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr3[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr3[i][j];
        }
    }
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;
     while(minr<=maxr &&minc<=maxc){
         if(minr>maxr || minc>maxc)break;
        for(int i=minc;i<=maxc;i++){
            cout<<arr3[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc)break;
        for(int i=minr;i<=maxr;i++){
            cout<<arr3[i][maxc]<<" ";
        }
      maxc--;
      if(minr>maxr || minc>maxc)break;
      for(int i=maxc;i>=minc;i--){
        cout<<arr3[maxr][i]<<" ";
      }
      maxr--;
      if(minr>maxr || minc>maxc)break;
      for(int i=maxr;i>=minr;i--){
        cout<<arr3[i][minc]<<" ";
      }
      minc++;
     }
}