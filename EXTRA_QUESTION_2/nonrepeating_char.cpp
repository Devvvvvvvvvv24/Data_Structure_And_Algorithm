#include<iostream>
using namespace std;

int main(){
    string str="graphic era university";
    int len=str.length();
    for(int i=0;i<len;i++){
       int count=0;
       for(int j=0;j<len;j++){
        if(i!=j &&str[i]==str[j])count++;
       }
       if(count==0)cout<<str[i]<<" ";// c g h n p s t u v y
    }
}