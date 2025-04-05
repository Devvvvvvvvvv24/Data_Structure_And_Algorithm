#include<iostream>
using namespace std;

void dig(int n,int &sum){
if(n==0){
  cout<<sum;
  return;
}
int r=n%10;
sum+=r;
dig(n/10,sum);
}
int main(){
    int sum=0;
    dig(123,sum);
}