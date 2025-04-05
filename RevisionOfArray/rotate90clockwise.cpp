#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        cin>>arr[i][j];
     }
  }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<m;j++){
        swap(arr[i][j],arr[j][i]);
    }
   }
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<j){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}