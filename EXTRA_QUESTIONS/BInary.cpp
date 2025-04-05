#include<iostream>
using namespace std;


int main(){
    int arr[5]={1,0,1,0,1};
    int sum=0;
    int x=1;
    for(int i=5;i>0;i--){
        if(arr[i]==0){
        sum+=arr[i]*;
        x*=2;
        }
        else{
            sum=+arr[i]*x;

        }
    }
    cout<<sum;
}