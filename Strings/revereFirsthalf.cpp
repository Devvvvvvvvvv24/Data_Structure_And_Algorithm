#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="abcdefgh";
    int n=str.length();
    int i=0;
    int j=n/2 -1;
    while(i<=j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout<<str;
}