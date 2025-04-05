#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string str="dev sharma is a good boy";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}