#include<iostream>
using namespace std;


int main(){
    string s="devvddddv";
    int maxcount=0;
    for(int i=0;s[i]!='\0';i++){
        int count=1;
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j])count++;
        }
        if(maxcount<count){
            maxcount=count;
        }
    }

     for(int i=0;s[i]!='\0';i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j])count++;
        }
        if(maxcount==count){
            // maxcount=count;
            cout<<ch<<" "<<maxcount;
        }
    }
    
}