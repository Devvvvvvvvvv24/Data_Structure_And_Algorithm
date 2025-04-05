#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int rev=0;
    int dig=0;
    while(n>0){
        int r=n%10;
      dig=r+dig*10;
      n/=10;
    }
    cout<<dig;
}