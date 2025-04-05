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
    int mini=INT_MAX;
    int idx=-1;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i][j];
        }
        if(mini>sum){
            mini=sum;
            idx=j;
        }
    }
    cout<<mini<<" "<<idx;
}