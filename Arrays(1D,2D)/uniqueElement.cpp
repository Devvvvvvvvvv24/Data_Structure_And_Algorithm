#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,3,2,1,3,4,5,6,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int count=0;
      for(int j=0;j<n;j++){
        if( i!=j && arr[i]==arr[j]){
            count++;
        }
    }
     if(count==0){
        cout<<arr[i]<<endl;
        break;
     }
    }
   
    
   
}