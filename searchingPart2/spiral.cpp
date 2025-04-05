#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr3[m][n];
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    int count=1;
    while(minr<=maxr &&minc<=maxc){
        if(minr>maxr || minc>maxc)break;
        for(int i=minc;i<=maxc;i++){
            arr3[minr][i]=count++;
        }
        minr++;
         if(minr>maxr || minc>maxc)break;
        for(int i=minr;i<=maxr;i++){
             arr3[i][maxc]=count++;
        }
        maxc--;
         if(minr>maxr || minc>maxc)break;
        for(int i=maxc;i>=minc;i--){
            arr3[maxr][i]=count++;
        }
        maxr--;
         if(minr>maxr || minc>maxc)break;
        for(int i=maxr;i>=minr;i--){
            arr3[i][minc]=count++;
                    }
        minc++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}