#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str="devvvv";
    vector<int>v(26,0);
    for(int i=0;i<v.size();i++){
    int ascii=(int)str[i];
    v[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<v.size();i++){
      if(max<v[i])max=v[i];
    }
    for(int i=0;i<v.size();i++){
        if(max==v[i]){
            // char ascii=(char)v[i];
            int ascii=i+97;
            char word=char(ascii);
            cout<<word<<" "<<max;
        }
    }
}