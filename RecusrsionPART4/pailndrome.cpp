#include<iostream>
using namespace std;

bool palindrome(string str,int i,int j){
    if(i>j)return true;
     if(str[i]!=str[j])return false;
    else return palindrome(str,i+1,j-1);
}
int main(){
    string str="abcba";
    int n=str.length();
    cout<<palindrome(str,0,n-1);
}