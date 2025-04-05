#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="abbcdeffghh";
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=str[i-1]&&str[i]!=str[i+1]){
            count++;
        }
        i++;
    }
    cout<<count;
}
