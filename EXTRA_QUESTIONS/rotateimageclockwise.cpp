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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

for(int k=0;k<m;k++){
int i=0;
int j=m-1;
while(i<=j){
    int temp=arr[k][i];
    arr[k][i]=arr[k][j];
    arr[k][j]=temp;
    i++;
    j--;
}
}
cout<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}