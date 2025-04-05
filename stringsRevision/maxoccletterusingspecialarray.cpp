#include<iostream>
#include<vector>
using namespace std;


int main(){
    string str="devvvvvv";
    vector<int>arr(26,0);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<arr.size();i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    for(int i=0;i<arr.size();i++){
        if(mx==arr[i]){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<mx<<endl;
        } 
    }
}