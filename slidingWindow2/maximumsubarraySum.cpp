#include<iostream>
using namespace std;

int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=0;
    int maxidx=0;
    int k=3;

    for(int i=0;i<=n-k;i++){//tno=n-k+1
      int sum=0;
      for(int j=i;j<i+k;j++){ //tno=k
        sum+=arr[j];
      }
      if(maxsum<sum){
        maxsum=sum;
        maxidx=i;
      }
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
}