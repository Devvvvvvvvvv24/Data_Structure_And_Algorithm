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
    int maxi=INT_MIN;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            idx=j;
        }
    }
    cout<<maxi<<" "<<idx;
}