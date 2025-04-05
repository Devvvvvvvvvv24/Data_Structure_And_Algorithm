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
    cout<<endl;
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=m-1;
    while(minr<=maxr &&minc<=maxc){
      for(int i=minc;i<=maxc;i++){
        cout<<arr[minr][i]<<" ";
      }
      minr++;
      if(minc>maxc||minr>maxr)break;
      for(int i=minr;i<=maxr;i++){
        cout<<arr[i][maxc]<<" ";
      }
      maxc--;
      if(minc>maxc||minr>maxr)break;
      for(int i=maxc;i>=minc;i--){
        cout<<arr[maxr][i]<<" ";
      }
      maxr--;
      if(minc>maxc||minr>maxr)break;
      for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
      }
      minc++;
    }
}