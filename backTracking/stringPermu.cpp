#include<iostream>
using namespace std;

void permu(string input,string output){
    if(input==""){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++){
         char ch=input[i];
         string left=input.substr(0,i);
         string right=input.substr(i+1);
         string ros=left+right;
         permu(ros,output+ch);
    }
}
int main(){
    permu("abc","");
}