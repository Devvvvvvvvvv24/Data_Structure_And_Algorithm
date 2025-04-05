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
    int idx=-1;
    int mini=INT_MAX;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(mini>sum){
            mini=sum;
            idx=i;
        }
       
    }
     cout<<mini<<" "<<idx<<" ";

}