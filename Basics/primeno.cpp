#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n/2;i++){
       if(n%i==0){
        flag=false;
        break;
       } 
    }
    if(n==0 || n==1){
        cout<<"neither prime nor composite"<<endl;
    }
    else if(flag==true){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"composite number"<<endl;
    }
}