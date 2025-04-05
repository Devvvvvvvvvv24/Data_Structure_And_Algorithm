#include<iostream>
using namespace std;

void summ(int a,int b,int &sum){
    if(a>b)return;
    if(a==b){
        if(a%2!=0)sum+=a;
        return;
    }
    if(a%2!=0){
        sum+=a;
        summ(a+2,b,sum);
    }
    else{
        summ(a+1,b,sum);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0;
    summ(a,b,sum);
    cout<<sum;
}