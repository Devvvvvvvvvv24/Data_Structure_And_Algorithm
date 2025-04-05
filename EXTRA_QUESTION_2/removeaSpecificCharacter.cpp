#include<iostream>
using namespace std;

int main(){
    string s;
    string res="";
    getline(cin,s);
    char c;
    cin>>c;
    for(int i=0;i<s.size();i++){
      if(s[i]!=c)res+=s[i];
    }
    cout<<res;
}