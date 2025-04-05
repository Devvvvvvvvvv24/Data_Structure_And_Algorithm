#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    cout<<arr<<endl;//addressof first element
    cout<<&arr<<endl;//addressof first element
    cout<<&arr[0]<<endl;//addressof first element
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>x){
            count++;
        }
    }
cout<<count;
}