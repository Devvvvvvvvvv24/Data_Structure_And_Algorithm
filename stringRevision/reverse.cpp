#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    string str="123456789";
    int len=str.length();
    reverse(str.begin()+len/2,str.end());
    cout<<str;
}