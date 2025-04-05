#include<iostream>
using namespace std;

void print(int n,char a,char b,char c){
    if(n==0)return;
    print(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    print(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    print(n,'A','B','C');
}