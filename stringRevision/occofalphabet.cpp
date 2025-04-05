#include<iostream>
#include<vector>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    vector<int>v(26,0);
    for(int i=0;i<v.size()&&s[i]!='\0';i++){
       int ascii=(int)s[i];
       v[ascii-97]++;
    }
    for(int i=0;i< v.size();i++){
        if(v[i]>0){
         int ascii=i+97;
         char ch=(char)ascii;
         cout<<ch<<" "<<v[i]<<endl;
        }
    }
}