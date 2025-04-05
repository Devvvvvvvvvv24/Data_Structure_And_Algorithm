#include<iostream>
using namespace std;

void print(int a,int b,int &sum){
    if(a>b)return;
    if(a==b){
        if(a%2!=0)sum+=a;
        return;
    }
    if(a%2!=0){
        sum+=a;
        print(a+2,b,sum);
    }
    else print(a+1,b,sum);
    
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0;
    print(a,b,sum);
    cout<<sum;
}