#include<iostream>
using namespace std;

void print(int n,int &rev){
    if(n==0){
        cout<<rev;
        return;
    }
    int r=n%10;
    rev*=10;
    rev+=r;
    print(n/10,rev);
}

int main(){
    int rev=0;
    print(123,rev);
}