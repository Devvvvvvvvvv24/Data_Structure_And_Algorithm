#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="name";
    reverse(str.begin(),str.end());
    cout<<str;
}