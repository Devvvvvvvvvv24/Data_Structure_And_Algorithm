#include<iostream>
#include<vector>
using namespace std;
void generate(int n){
    vector< vector<int> >arr(n , vector<int> (n));
    int minr=0;
    int minc=0;
    int maxr=n-1;
    int maxc=n-1;
    int count=1;
    while(minr<=maxr &&minc<=maxc){
        for(int i=minc;i<=maxc;i++){
            arr[minr][i]=count++;
        }
        if(minc>maxc ||minr>maxr)break;
        minr++;
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc]=count++;
        }
        maxc--;
        if(minc>maxc ||minr>maxr)break;
        for(int i=maxc;i>=minc;i--){
            arr[maxr][i]=count++;
        }
        maxr--;
        if(minc>maxc ||minr>maxr)break;
        for(int i=maxr;i>=minr;i--){
             arr[i][minc]=count++;
        }
        minc++;
    }
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
      }
int main(){
    generate(3);
   
}