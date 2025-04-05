#include<iostream>
#include<vector>
using namespace std;


int main(){
    string str="dev";
    vector<int>arr(26,0);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<arr[i]<<endl;
        }
    }
}