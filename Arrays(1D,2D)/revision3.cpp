#include<iostream>
using namespace std;
int main(){
    int arr[]={73,45,33,122,30,78,9,4,67,55};
             //0, 1, 2,  3 , 4  5 6 7  8
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
}