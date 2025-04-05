#include<iostream>
using namespace std;

bool pali(string str,int i,int j){
    if(i>j)return true;
    if(str[i]!=str[j])return false;
    return pali(str,i+1,j-1);
}
int main(){
    string str="abab";
    cout<<pali(str,0,str.size()-1);
}