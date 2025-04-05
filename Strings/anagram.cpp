#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="";
    string s2="vedw";
    bool flag= true;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1.size()!=s2.size()){
        cout<<"not an anagram "<<endl;
    }
    else{
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"yes anagram "<<endl;
    }
    else{
        cout<<"not anagram"<<endl;
    }
    }
}