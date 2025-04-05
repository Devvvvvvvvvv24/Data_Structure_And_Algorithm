#include<iostream>
#include<vector>
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
vector<int>a(m,0);
vector<int>b(n,0);
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==0){
            a[i]=1;
            b[j]=1;
        }
    }
}
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i] ||b[j])arr[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

