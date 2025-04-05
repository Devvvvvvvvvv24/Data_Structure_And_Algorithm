#include<iostream>
using namespace std;

int gcd(int a,int b){
    for(int i=min(a,b);i>=2;i--){
      if(a%i==0 && b%i==0)return i;
    }
    return  1;
}
int hcf(int a,int b){
    if(a==0)return b;
    else return hcf(b%a,a);
}
int main(){
    int a=23;
    int b=47;
    cout<<gcd(a,b);
}