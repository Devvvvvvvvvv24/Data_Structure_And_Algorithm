#include<iostream>
using namespace std;

void display(int arr[],int size){  //array is pass by reference
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void change(int arr[]){    //array is pass by reference
    arr[5]=100;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr);
    display(arr,size);
}