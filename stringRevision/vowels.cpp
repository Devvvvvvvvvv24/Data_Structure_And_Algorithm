#include<iostream>
using namespace std;

int main(){
    string str="dev sharma";
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]=='a' ||str[i]=='e'|| str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
}