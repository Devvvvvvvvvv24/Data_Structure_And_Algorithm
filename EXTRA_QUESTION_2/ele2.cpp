#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter no. of units"<<endl;
    cin>>n;
    string names[n];
    int units[n];
    for(int i=0;i<n;i++){
        cout<<"enter user name "<<i+1<<":";
        cin>>names[i];
        cout<<"enter no. of unit consumed by "<<names[i]<<":";
        cin>>units[i];
    }
    
}